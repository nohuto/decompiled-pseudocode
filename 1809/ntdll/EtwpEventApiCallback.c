/*
 * XREFs of EtwpEventApiCallback @ 0x180077B20
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r9
  __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  char v9; // r11
  unsigned int v10; // ecx
  void (__fastcall *v11)(__int64, _QWORD); // rax
  char v13; // al
  int v14; // r11d
  __int64 v15; // r15
  unsigned __int8 *v16; // r11
  unsigned int v17; // r14d
  unsigned __int64 v18; // r8
  __int64 Heap; // rax
  unsigned int Size; // [rsp+60h] [rbp-10h]
  int Size_4; // [rsp+64h] [rbp-Ch]

  v3 = *(_DWORD *)(a1 + 72);
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 248);
  if ( v3 == 2 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 76);
    v4 = *(_QWORD *)(a1 + 88);
    v8 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v8 = -1LL;
    if ( *(_BYTE *)(a2 + 124) )
    {
      v9 = 1;
      v8 = *(_QWORD *)(a2 + 104);
      a3 = (unsigned __int64 *)*(unsigned __int8 *)(a2 + 125);
      v4 = *(_QWORD *)(a2 + 112);
    }
    else
    {
      LOBYTE(a3) = 0;
      v9 = 0;
    }
    if ( *(_BYTE *)(a2 + 244) )
    {
      v9 = 1;
      v13 = (char)a3;
      if ( (unsigned __int8)a3 <= *(_BYTE *)(a2 + 245) )
        v13 = *(_BYTE *)(a2 + 245);
      v4 |= *(_QWORD *)(a2 + 232);
      v8 &= *(_QWORD *)(a2 + 224);
      LOBYTE(a3) = v13;
    }
    if ( v9 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v8 = 0LL;
      *(_DWORD *)(a1 + 116) = 0;
    }
  }
  v10 = 0;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(a1 + 16LL * v10 + 132);
      if ( v14 >= 0 || v14 == 0x80000000 )
        break;
      if ( ++v10 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_8;
    }
    Size_4 = *(_DWORD *)(a1 + 16LL * v10 + 132);
    Size = *(_DWORD *)(a1 + 16LL * v10 + 128);
    v15 = a1 + *(_QWORD *)(a1 + 16LL * v10 + 120);
    if ( *(__int16 *)(a1 + 78) < 0 && v14 == 0x80000000 )
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      v16 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v15 + 20) = 0;
      v17 = 0;
      *(_DWORD *)(v15 + 16) = Size;
      while ( !*(v16 - 2) || *v16 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v17;
        v16 += 24;
        if ( v17 >= 4 )
          goto LABEL_28;
      }
      *(_QWORD *)(v15 + 8) = 1LL << ((unsigned __int8)v17 + 32);
LABEL_28:
      if ( v5 )
      {
        EtwpAcquireGuidEntryExclusive(v5, v8, a3, v4);
        v18 = *(_QWORD *)(v5 + 168);
        if ( v18 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, Size + 16LL);
        *(_QWORD *)(v5 + 168) = Heap;
        if ( Heap )
        {
          *(_DWORD *)(Heap + 8) = Size;
          *(_DWORD *)(*(_QWORD *)(v5 + 168) + 12LL) = Size_4;
          **(_QWORD **)(v5 + 168) = *(_QWORD *)(v5 + 168) + 16LL;
          memmove(**(void ***)(v5 + 168), (const void *)v15, Size);
        }
        *(_DWORD *)(v5 + 48) = 0;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 40));
      }
    }
  }
LABEL_8:
  v11 = *(void (__fastcall **)(__int64, _QWORD))(a2 + 48);
  if ( v11 )
    v11(a1 + 56, v3);
  return 0LL;
}
