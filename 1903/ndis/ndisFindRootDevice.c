/*
 * XREFs of ndisFindRootDevice @ 0x1C0136458
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     WPP_RECORDER_SF_Zqq @ 0x1C0027428 (WPP_RECORDER_SF_Zqq.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F99C (ndisReferenceMiniportByHandle.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

wchar_t *__fastcall ndisFindRootDevice(
        unsigned __int16 *a1,
        char a2,
        _UNICODE_STRING **a3,
        _UNICODE_STRING **a4,
        _NDIS_MINIPORT_BLOCK **a5)
{
  _UNICODE_STRING **v5; // rbx
  _UNICODE_STRING **v6; // r12
  UNICODE_STRING *v7; // r13
  _UNICODE_STRING *p_MiniportName; // rbp
  char v9; // r15
  SIZE_T v11; // rdx
  wchar_t *result; // rax
  _UNICODE_STRING *p_DestinationString; // rdi
  KIRQL v14; // al
  struct _NDIS_M_DRIVER_BLOCK *v15; // rsi
  _NDIS_MINIPORT_BLOCK *i; // rbx
  int v17; // edx
  _NDIS_BIND_PATHS *BindPaths; // rdx
  unsigned int Number; // r12d
  _UNICODE_STRING *Paths; // r15
  char v21; // [rsp+40h] [rbp-68h]
  unsigned int v22; // [rsp+44h] [rbp-64h]
  wchar_t *P; // [rsp+48h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  KIRQL v29; // [rsp+D0h] [rbp+28h]

  v22 = 1;
  v21 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v5 = a4;
  DestinationString.Buffer = 0LL;
  v6 = a3;
  v7 = (UNICODE_STRING *)a1;
  p_MiniportName = 0LL;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Du,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1);
  DestinationString.Length = v7->Length;
  v11 = (unsigned __int16)(DestinationString.Length + 2);
  DestinationString.MaximumLength = DestinationString.Length + 2;
  *v6 = 0LL;
  *v5 = 0LL;
  *a5 = 0LL;
  result = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x7473444Eu);
  P = result;
  DestinationString.Buffer = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, v7, 0);
    p_DestinationString = &DestinationString;
    ndisReferencePackage((__int64)&ndisPkgs);
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v15 = ndisMiniDriverList;
    v29 = v14;
    if ( ndisMiniDriverList )
    {
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v15->Ref.SpinLock);
        for ( i = v15->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( a2 )
          {
            if ( p_DestinationString->Length == i->MiniportName.Length
              && !memcmp(p_DestinationString->Buffer, i->MiniportName.Buffer, p_DestinationString->Length) )
            {
              p_MiniportName = &i->MiniportName;
              *a5 = i;
              v9 = 1;
              p_DestinationString = &i->MiniportName;
              v21 = 1;
              break;
            }
          }
          else
          {
            BindPaths = i->BindPaths;
            Number = BindPaths->Number;
            if ( BindPaths->Number >= v22 )
            {
              Paths = BindPaths->Paths;
              if ( DestinationString.Length == BindPaths->Paths[0].Length
                && !memcmp(DestinationString.Buffer, BindPaths->Paths[0].Buffer, DestinationString.Length) )
              {
                p_MiniportName = Paths;
                *a5 = i;
                v9 = 1;
                p_DestinationString = &i->MiniportName;
                v21 = 1;
                v22 = Number;
              }
              else
              {
                v9 = v21;
              }
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v15->Ref.SpinLock);
        if ( a2 && v9 )
          break;
        v15 = v15->NextDriver;
      }
      while ( v15 );
      v7 = (UNICODE_STRING *)a1;
      v5 = a4;
      v6 = a3;
      v14 = v29;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(P, 0);
    if ( v9 && *a5 )
    {
      if ( ndisReferenceMiniportByHandle(*a5, 1) )
      {
        *v6 = p_DestinationString;
        *v5 = p_MiniportName;
      }
      else
      {
        *a5 = 0LL;
      }
    }
    result = (wchar_t *)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (wchar_t *)WPP_RECORDER_SF_Zqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v17,
                          0xDu,
                          0x2Eu,
                          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
                          &v7->Length,
                          (char)p_DestinationString,
                          p_MiniportName);
  }
  return result;
}
