/*
 * XREFs of ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180243EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802414C4 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 v5; // rbx
  int v7; // eax
  __int16 v8; // dx
  char v9; // cl
  char v10; // cl
  int v11; // r8d
  __int16 v12; // cx
  __int16 v14; // [rsp+4Ah] [rbp+12h]
  int v15; // [rsp+50h] [rbp+18h]

  v14 = HIWORD(a2);
  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 296LL);
  v5 = a3;
  AcquireSRWLockExclusive(v4);
  HIWORD(v15) = HIWORD(a2);
  if ( v5 == -1 )
  {
    v8 = a2;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 332);
    if ( (v5 & 1) != 0 )
    {
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 1;
      LOWORD(v7) = v8;
    }
    else
    {
      v8 = v7;
    }
    if ( (v5 & 2) != 0 )
    {
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0xE;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 4) != 0 )
    {
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0x30;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 8) != 0 )
    {
      v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)a2) & 0x40;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v8 = v7 ^ (v7 ^ a2) & 0x80;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v8 = v7 ^ (v7 ^ a2) & 0x100;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 0x40) != 0 )
    {
      v8 = v7 ^ (v7 ^ a2) & 0x200;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 0x80) != 0 )
    {
      v8 = v7 ^ (v7 ^ a2) & 0x400;
      LOWORD(v7) = v8;
    }
    if ( (v5 & 0x100) != 0 )
      v8 = v7 ^ (v7 ^ a2) & 0x800;
    v9 = BYTE2(v7);
    if ( (v5 & 0x200) != 0 )
      v9 = v14;
    BYTE2(v15) = v9;
    v10 = HIBYTE(v7);
    if ( (v5 & 0x400) != 0 )
      v10 = HIBYTE(v14);
    HIBYTE(v15) = v10;
  }
  v11 = *(_DWORD *)(a1 + 440);
  if ( (v11 & 4) == 0 )
    v8 ^= ((unsigned __int8)v8 ^ (unsigned __int8)*(_WORD *)(a1 + 332)) & 0xF;
  v12 = *(_WORD *)(a1 + 332);
  if ( (v11 & 8) == 0 )
    v8 ^= ((unsigned __int8)v8 ^ (unsigned __int8)v12) & 0x31;
  LOWORD(v15) = (v8 ^ v12) & 0xC0 ^ v8;
  if ( v15 != *(_DWORD *)(a1 + 332) )
  {
    *(_DWORD *)(a1 + 332) = v15;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 24));
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
