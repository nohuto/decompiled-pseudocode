/*
 * XREFs of ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B9470
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802B6B00 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 v5; // rbx
  __int16 v7; // dx
  char v8; // cl
  char v9; // cl
  int v10; // ecx
  bool v11; // zf
  __int16 v12; // cx
  __int16 v14; // [rsp+4Ah] [rbp+12h]
  int v15; // [rsp+50h] [rbp+18h]

  v14 = HIWORD(a2);
  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 280LL);
  v5 = a3;
  AcquireSRWLockExclusive(v4);
  HIWORD(v15) = HIWORD(a2);
  if ( v5 == -1 )
  {
    v7 = a2;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 332);
    if ( (v5 & 1) != 0 )
      v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 1;
    if ( (v5 & 2) != 0 )
      v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0xE;
    if ( (v5 & 4) != 0 )
      v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0x30;
    if ( (v5 & 8) != 0 )
      v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0x40;
    if ( (v5 & 0x10) != 0 )
      v7 ^= (v7 ^ a2) & 0x80;
    if ( (v5 & 0x20) != 0 )
      v7 ^= (v7 ^ a2) & 0x100;
    if ( (v5 & 0x40) != 0 )
      v7 ^= (v7 ^ a2) & 0x200;
    if ( (v5 & 0x80) != 0 )
      v7 ^= (v7 ^ a2) & 0x400;
    if ( (v5 & 0x100) != 0 )
      v7 ^= (v7 ^ a2) & 0x800;
    v8 = BYTE2(*(_DWORD *)(a1 + 332));
    if ( (v5 & 0x200) != 0 )
      v8 = v14;
    BYTE2(v15) = v8;
    v9 = HIBYTE(*(_DWORD *)(a1 + 332));
    if ( (v5 & 0x400) != 0 )
      v9 = HIBYTE(v14);
    HIBYTE(v15) = v9;
  }
  v10 = *(_DWORD *)(a1 + 440);
  if ( (v10 & 4) == 0 )
    v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)*(_WORD *)(a1 + 332)) & 0xF;
  v11 = (v10 & 8) == 0;
  v12 = *(_WORD *)(a1 + 332);
  if ( v11 )
    v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)v12) & 0x31;
  LOWORD(v15) = (v7 ^ v12) & 0xC0 ^ v7;
  if ( v15 != *(_DWORD *)(a1 + 332) )
  {
    *(_DWORD *)(a1 + 332) = v15;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 24));
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
