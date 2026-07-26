/*
 * XREFs of ndisMOidRequestToRequest @ 0x1C0045DE0
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqDL @ 0x1C0043F54 (WPP_SF_qqDL.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(__int64 a1, __int64 a2)
{
  int v2; // r15d
  unsigned int v5; // esi
  __int64 Clock; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  char *v10; // rsi
  int v11; // eax
  char v12; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // r14
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 32);
  v5 = -1073741823;
  Clock = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0x49u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, *(_DWORD *)(a2 + 32));
  if ( *(_DWORD *)(a2 + 4) == 12 )
  {
    v5 = -1073741637;
    goto LABEL_32;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v8[8] = *(_DWORD *)(a2 + 4);
    v10 = (char *)(v8 + 16);
    v8[10] = *(_DWORD *)(a2 + 32);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a2 + 40);
    v8[14] = *(_DWORD *)(a2 + 48);
    v8[15] = *(_DWORD *)(a2 + 52);
    v8[16] = *(_DWORD *)(a2 + 56);
    v8[6] |= 0x400u;
    *((_QWORD *)v8 + 1) = a2;
    v11 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 576) = v8;
    if ( (v11 & 0x20000) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 3792) + 288LL))(
             *(_QWORD *)(a1 + 24),
             0LL,
             v8);
LABEL_29:
      if ( v5 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v20 = *(_DWORD **)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( v20 )
        {
          *(_DWORD *)(a2 + 52) = v20[15];
          *(_DWORD *)(a2 + 56) = v20[16];
          ExFreePoolWithTag(v20, 0);
        }
      }
      goto LABEL_32;
    }
    v12 = 1;
    if ( (v11 & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      CurrentThread = KeGetCurrentThread();
      for ( *(_DWORD *)(a1 + 1864) = 2299061; ; *(_DWORD *)(a1 + 1864) = 2299062 )
      {
        *(_QWORD *)(a1 + 520) = CurrentThread;
        if ( !*(_BYTE *)(a1 + 89) )
          break;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v24 = 0;
        do
          ++v24;
        while ( v24 < 0x32 );
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(a1 + 89) = 1;
      *(_DWORD *)(a1 + 1868) = 2299062;
      v14 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1864) = 0;
      *(_QWORD *)(a1 + 1872) = v14;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      v10 = (char *)(v8 + 16);
    }
    if ( HIBYTE(dword_1C00A2098) )
    {
      ndisTraceDpcStart(a1, 8LL);
      Clock = WmiGetClock(0LL, 0LL, v15);
    }
    else
    {
      v12 = 0;
    }
    v16 = v8[8];
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3792)
                                                                                          + 208LL))(
                *(_QWORD *)(a1 + 24),
                (unsigned int)v8[10],
                *((_QWORD *)v8 + 6),
                (unsigned int)v8[14],
                v8 + 15,
                v10);
LABEL_24:
        v5 = v18;
        goto LABEL_25;
      }
      if ( v17 != 1 )
      {
        v5 = -1073741637;
LABEL_25:
        if ( v12 )
        {
          v19 = WmiGetClock(0LL, 0LL, v9);
          ndisTraceDpcEnd(a1, 8LL, v19 - Clock);
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
          *(_BYTE *)(a1 + 89) = 0;
          *(_QWORD *)(a1 + 1864) = 0LL;
          *(_QWORD *)(a1 + 1872) = 0LL;
          *(_QWORD *)(a1 + 520) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        }
        goto LABEL_29;
      }
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3792) + 176LL))(
            *(_QWORD *)(a1 + 24),
            (unsigned int)v8[10],
            *((_QWORD *)v8 + 6),
            (unsigned int)v8[14],
            v8 + 15,
            v10);
    goto LABEL_24;
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v23) = v5;
    LODWORD(v22) = v2;
    WPP_SF_qqDL(0x4Au, a2, a1, a2, v22, v23);
  }
  return v5;
}
