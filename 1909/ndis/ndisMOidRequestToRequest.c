/*
 * XREFs of ndisMOidRequestToRequest @ 0x1C006B48C
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0069EBC (WPP_RECORDER_SF_qqDd.c)
 *     ndisTraceDpcEnd @ 0x1C007E9D0 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007EAB8 (ndisTraceDpcStart.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbp
  unsigned int v6; // esi
  __int64 Clock; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  char *v10; // rsi
  int v11; // eax
  char v12; // r14
  KSPIN_LOCK *v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // r14
  char v21; // [rsp+30h] [rbp-48h]
  char v22[4]; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+88h] [rbp+10h]

  v3 = *(_DWORD *)(a2 + 32);
  v4 = a2;
  v6 = -1073741823;
  Clock = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = *(_DWORD *)(a2 + 32);
    v21 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      54,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v21,
      v22[0]);
  }
  if ( *(_DWORD *)(v4 + 4) == 12 )
  {
    v6 = -1073741637;
    goto LABEL_31;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v9[8] = *(_DWORD *)(v4 + 4);
    v10 = (char *)(v9 + 16);
    v9[10] = *(_DWORD *)(v4 + 32);
    *((_QWORD *)v9 + 6) = *(_QWORD *)(v4 + 40);
    v9[14] = *(_DWORD *)(v4 + 48);
    v9[15] = *(_DWORD *)(v4 + 52);
    v9[16] = *(_DWORD *)(v4 + 56);
    v9[6] |= 0x400u;
    *((_QWORD *)v9 + 1) = v4;
    v11 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 576) = v9;
    if ( (v11 & 0x20000) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 3760) + 288LL))(
             *(_QWORD *)(a1 + 24),
             0LL,
             v9);
LABEL_28:
      if ( v6 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v19 = *(_DWORD **)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( v19 )
        {
          *(_DWORD *)(v4 + 52) = v19[15];
          *(_DWORD *)(v4 + 56) = v19[16];
          ExFreePoolWithTag(v19, 0);
        }
      }
      goto LABEL_31;
    }
    v12 = 1;
    if ( (v11 & 0x40000) == 0 )
    {
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v13 = (KSPIN_LOCK *)(a1 + 96);
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        if ( !*(_BYTE *)(a1 + 89) )
          break;
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel(v13);
        v23 = 0;
        do
          ++v23;
        while ( v23 < 0x32 );
      }
      *(_BYTE *)(a1 + 89) = 1;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_QWORD *)(a1 + 1864) = CurrentThread;
      KeReleaseSpinLockFromDpcLevel(v13);
      v10 = (char *)(v9 + 16);
    }
    if ( HIBYTE(dword_1C00E8098) )
    {
      ndisTraceDpcStart(a1, 8LL);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v12 = 0;
    }
    v15 = v9[8];
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3760)
                                                                                          + 208LL))(
                *(_QWORD *)(a1 + 24),
                (unsigned int)v9[10],
                *((_QWORD *)v9 + 6),
                (unsigned int)v9[14],
                v9 + 15,
                v10);
LABEL_23:
        v6 = v17;
        goto LABEL_24;
      }
      if ( v16 != 1 )
      {
        v6 = -1073741637;
LABEL_24:
        if ( v12 )
        {
          v18 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8LL, v18 - Clock);
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
          *(_BYTE *)(a1 + 89) = 0;
          *(_QWORD *)(a1 + 1864) = 0LL;
          *(_QWORD *)(a1 + 520) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        }
        goto LABEL_28;
      }
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3760) + 176LL))(
            *(_QWORD *)(a1 + 24),
            (unsigned int)v9[10],
            *((_QWORD *)v9 + 6),
            (unsigned int)v9[14],
            v9 + 15,
            v10);
    goto LABEL_23;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x37u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v4,
      v3,
      v6);
  return v6;
}
