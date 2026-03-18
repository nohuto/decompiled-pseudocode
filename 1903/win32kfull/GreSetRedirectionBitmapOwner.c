/*
 * XREFs of GreSetRedirectionBitmapOwner @ 0x1C01210A0
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E92FC (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall GreSetRedirectionBitmapOwner(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  SURFACE *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF
  SURFACE *v12; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    LOBYTE(v7) = 5;
    v8 = (SURFACE *)HmgShareLockCheck(a1, v7);
    v12 = v8;
    if ( v8 )
    {
      if ( (*((_DWORD *)v8 + 28) & 0x800) != 0 )
      {
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v11, (struct _SURFOBJ *)((char *)v8 + 24));
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v12 + 272));
        v10 = *((_QWORD *)v12 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v10, (struct _SURFOBJ *)((char *)v12 + 24), 0LL, 2u);
        if ( a2 != -1 )
          *((_QWORD *)v12 + 81) = a2;
        *((_DWORD *)v12 + 164) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v12 + 272));
        v6 = 1;
        if ( a3 && (unsigned int)SURFACE::Map(v12) <= 1 )
          SURFACE::bUnMap(v12, &v12, 0LL);
        if ( v11 )
          GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
        v8 = v12;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  return v6;
}
