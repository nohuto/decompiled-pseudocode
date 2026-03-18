/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x14072C250
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     _CmIsDevicePresent @ 0x1407383A0 (_CmIsDevicePresent.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v7; // si
  PCUNICODE_STRING v8; // rax
  PVOID i; // rdi
  int DeviceRegProp; // eax
  unsigned int v11; // r15d
  _DWORD *v12; // r14
  __int64 v13; // r8
  _WORD *v14; // rdx
  int ObjectProperty; // eax
  unsigned int v17; // eax
  const WCHAR *v18; // rdi
  __int64 v19; // rax
  void *v20; // rcx
  PVOID PoolWithTag; // rdi
  void *v22; // rcx
  unsigned int v23; // ecx
  __int64 (__fastcall *v24)(__int64, __int64, _QWORD, _QWORD); // rax
  int v25; // [rsp+40h] [rbp-99h]
  _BYTE v26[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int NumberOfBytes; // [rsp+64h] [rbp-75h] BYREF
  int NumberOfBytes_4; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-6Dh] BYREF
  int v30; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-65h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v33[40]; // [rsp+90h] [rbp-49h] BYREF

  v31 = a3;
  memset(v33, 0, 0x4EuLL);
  v7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v26[0] = 0;
  NumberOfBytes = 0;
  v29 = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, v26) >= 0 && v26[0] )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v8->Length >= 2u && *v8->Buffer )
    {
      for ( i = *(PVOID *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        NumberOfBytes = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          a1,
                          a2,
                          0LL,
                          5,
                          (__int64)&NumberOfBytes_4,
                          (__int64)i,
                          (__int64)&NumberOfBytes,
                          0);
        if ( !DeviceRegProp && NumberOfBytes < 2 )
          break;
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_9;
        if ( NumberOfBytes < 2 )
          break;
        i = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x47706E50u);
        if ( !i )
        {
          DeviceRegProp = -1073741670;
LABEL_9:
          if ( !DeviceRegProp )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
              {
                v7 = 1;
                goto LABEL_53;
              }
            }
          }
          break;
        }
        v20 = *(void **)(a4 + 16);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        *(_DWORD *)(a4 + 24) = NumberOfBytes;
      }
      v11 = 0;
      v12 = &unk_140375318;
      while ( 2 )
      {
        if ( *v12 != 2 || v33[0] )
        {
          while ( 1 )
          {
LABEL_19:
            v13 = (unsigned int)*v12;
            v14 = v33;
            v25 = *(_DWORD *)(a4 + 24);
            if ( (_DWORD)v13 == 1 )
              v14 = (_WORD *)a2;
            NumberOfBytes = *(_DWORD *)(a4 + 24);
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               (__int64)v14,
                               v13,
                               0LL,
                               0LL,
                               *((_QWORD *)v12 - 1),
                               (__int64)&v30,
                               *(_QWORD *)(a4 + 16),
                               v25,
                               (__int64)&v29,
                               0);
            NumberOfBytes = v29;
            if ( !ObjectProperty && v29 < 2 )
              break;
            if ( ObjectProperty != -1073741789 )
              goto LABEL_23;
            if ( v29 < 2 )
              break;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x47706E50u);
            if ( !PoolWithTag )
            {
              ObjectProperty = -1073741670;
LABEL_23:
              if ( ObjectProperty >= 0 && v30 == 8210 )
              {
                v17 = *(_DWORD *)(a4 + 24);
                if ( v17 > 2 )
                {
                  *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 2) = 0;
                  v17 = *(_DWORD *)(a4 + 24);
                }
                if ( v17 > 4 )
                  *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 4) = 0;
                v18 = *(const WCHAR **)(a4 + 16);
                if ( *v18 )
                {
                  while ( RtlInitUnicodeStringEx(&DestinationString, v18) < 0
                       || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                  {
                    v19 = -1LL;
                    do
                      ++v19;
                    while ( v18[v19] );
                    v18 += v19 + 1;
                    if ( !*v18 )
                      goto LABEL_38;
                  }
                  v7 = 1;
                }
LABEL_38:
                if ( v7 )
                  goto LABEL_53;
              }
              break;
            }
            v22 = *(void **)(a4 + 16);
            if ( v22 )
              ExFreePoolWithTag(v22, 0);
            v23 = NumberOfBytes;
            *(_QWORD *)(a4 + 16) = PoolWithTag;
            *(_DWORD *)(a4 + 24) = v23;
          }
          ++v11;
          v12 += 4;
          if ( v11 < 4 )
            continue;
        }
        else
        {
          NumberOfBytes = 78;
          if ( (int)CmGetDeviceRegProp(
                      a1,
                      a2,
                      0LL,
                      9,
                      (__int64)&NumberOfBytes_4,
                      (__int64)v33,
                      (__int64)&NumberOfBytes,
                      0) >= 0
            && NumberOfBytes_4 == 1
            && NumberOfBytes >= 2 )
          {
            v33[38] = 0;
            goto LABEL_19;
          }
        }
        break;
      }
    }
    else
    {
      v7 = 1;
    }
    if ( v7 )
    {
LABEL_53:
      v24 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a4 + 32);
      if ( v24 )
        return v24(a1, a2, v31, *(_QWORD *)(a4 + 40));
    }
  }
  return v7;
}
