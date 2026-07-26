/*
 * XREFs of ndisOidPreSetPortAuthentication @ 0x1C0047C60
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  char v3; // r15
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  KIRQL v9; // cl
  int v10; // eax
  KIRQL v11; // cl
  int v12; // eax
  KIRQL v14; // [rsp+28h] [rbp-89h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v16[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-1h]
  __int64 v18; // [rsp+B8h] [rbp+7h]
  int v19; // [rsp+C0h] [rbp+Fh]
  int v20; // [rsp+C4h] [rbp+13h]
  int v21; // [rsp+C8h] [rbp+17h]
  int v22; // [rsp+CCh] [rbp+1Bh]
  int v23; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qD(0xD3u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, *(_DWORD *)(v2 + 8));
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v6 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v7 = *(_QWORD *)(v1 + 16);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
          v14 = v9;
          *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
          v10 = *(_DWORD *)(v7 + 124);
          *(_DWORD *)(v7 + 1864) = 2307816;
          if ( (v10 & 0x80u) == 0 )
          {
            *(_DWORD *)(v7 + 3344) = v6[1];
            LOBYTE(v8) = 1;
            *(_DWORD *)(v7 + 3348) = v6[2];
            *(_DWORD *)(v7 + 3352) = v6[3];
            *(_DWORD *)(v7 + 3356) = v6[4];
            ndisIfSetInterfaceState(v7, v8, v9);
            v9 = v14;
          }
          *(_QWORD *)(v7 + 520) = 0LL;
          *(_DWORD *)(v7 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v9);
        }
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v12 = *(_DWORD *)(v1 + 124);
        *(_DWORD *)(v1 + 1864) = 2307832;
        if ( (v12 & 0x80u) != 0 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1864) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3344) = v6[1];
        *(_DWORD *)(v1 + 3348) = v6[2];
        *(_DWORD *)(v1 + 3352) = v6[3];
        *(_DWORD *)(v1 + 3356) = v6[4];
        v16[0] = 3146112;
        v16[1] = *(_DWORD *)(v1 + 480);
        v17 = *(_QWORD *)(v1 + 792);
        v18 = *(_QWORD *)(v1 + 800);
        v19 = *(_DWORD *)(*(_QWORD *)(v1 + 4072) + 532LL);
        v20 = *(_DWORD *)(v1 + 3344);
        v21 = *(_DWORD *)(v1 + 3348);
        v22 = *(_DWORD *)(v1 + 3352);
        v23 = *(_DWORD *)(v1 + 3356);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1864) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v16;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807394;
        StatusIndication.StatusBufferSize = 48;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        *(_QWORD *)(v2 + 52) = 20LL;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        *(_DWORD *)(v2 + 56) = 20;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    v3 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0xD4u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, *(_DWORD *)(v2 + 8));
  return v3;
}
