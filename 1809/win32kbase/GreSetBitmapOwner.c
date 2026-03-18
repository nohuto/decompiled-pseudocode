/*
 * XREFs of GreSetBitmapOwner @ 0x1C001CA70
 * Callers:
 *     <none>
 * Callees:
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwner(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v9);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v10 = v6;
  if ( v6 && (*(_WORD *)(v6 + 100) || !*(_QWORD *)(v6 + 192) || a2) && (a1 & 0x800000) == 0 )
  {
    LOBYTE(v7) = 5;
    v4 = HmgSetOwner(a1, a2, v7);
  }
  SURFREF::~SURFREF((SURFREF *)v9);
  return v4;
}
