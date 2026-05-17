/*
 * XREFs of sub_180032F0C @ 0x180032F0C
 * Callers:
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_180030770 @ 0x180030770 (sub_180030770.c)
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     TpCallbackMayRunLong @ 0x1800705F0 (TpCallbackMayRunLong.c)
 *     LdrLockLoaderLock @ 0x18007BF50 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007CC60 (LdrUnlockLoaderLock.c)
 *     sub_180084810 @ 0x180084810 (sub_180084810.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010F1C4 @ 0x18010F1C4 (sub_18010F1C4.c)
 */

__int64 __fastcall sub_180032F0C(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r12d
  __int64 v8; // rcx
  signed __int32 v9; // eax
  int v10; // r15d
  int v11; // ebp
  unsigned __int32 v12; // ecx
  unsigned __int32 v13; // eax
  signed __int32 v14; // ett
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // rcx
  void **v18; // rbx
  __int64 v20; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v4 = 0;
  v22 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0LL, 0LL, &v22);
  _m_prefetchw((const void *)(a2 + 232));
  LODWORD(v8) = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    if ( (unsigned int)v8 < 2 )
    {
      v10 = 0;
      v11 = 0;
      v12 = v8 | 1;
    }
    else
    {
      v10 = 1;
      v11 = 1;
      v12 = v8 & 1 | (2 * ((unsigned int)v8 >> 1) - 2);
      if ( v12 < 2 )
      {
        v11 = 0;
        v12 |= 1u;
      }
    }
    v14 = v9;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v12, v9);
    v8 = v13;
  }
  while ( v14 != v13 );
  if ( v3 )
  {
    if ( v10 )
    {
      if ( (int)LdrAddRefDll(0, v3) < 0 )
      {
        v10 = 0;
        v11 = 0;
        v4 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v3;
      }
    }
    LdrUnlockLoaderLock(0LL, v22);
    if ( v4 )
    {
      sub_180066BBC(a2 + 56, 0xFFFFFFFFLL);
      sub_180084810(a2);
    }
  }
  if ( v11 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8) )
      v20 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v20 = 2147353478LL;
    if ( *(_BYTE *)v20 )
      sub_18010F1C4(*(_QWORD *)(a2 + 144), a2 + 200, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_1800318A8(a2 + 200, *(_QWORD *)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    _m_prefetchw((const void *)(a2 + 168));
    v15 = *(_DWORD *)(a2 + 168);
    do
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 168), v15 | 0x10000, v15);
    }
    while ( v16 != v15 );
    if ( (v15 & 0x30000) == 0 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v10 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      *(_DWORD *)(a1 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
      *(_BYTE *)(a1 + 76) |= 1u;
    }
    *(_DWORD *)(a1 + 144) |= 0x240u;
    *(_QWORD *)(a1 + 184) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v17 = *(_QWORD *)(a2 + 104);
    if ( v17 )
    {
      *(_QWORD *)(a1 + 80) = v17;
      RtlSetThreadSubProcessTag(v17);
    }
    NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 112);
    v18 = (void **)(a2 + 128);
    if ( v18 && NtCurrentTeb()->SystemReserved1[53] != *v18 && (int)ZwSetInformationThread(-2LL, 44LL, v18) >= 0 )
      NtCurrentTeb()->SystemReserved1[53] = *v18;
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
