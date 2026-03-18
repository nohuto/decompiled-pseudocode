/*
 * XREFs of ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C015F590 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C025752C (-vAltUnlockFast@SURFREF@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::TmpSrcCleanup(HSURF *this, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  HSURF v5; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  char v8; // [rsp+60h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( ThreadWin32Thread )
    *(_QWORD *)(ThreadWin32Thread + 384) = 0LL;
  if ( this[13] && this[12] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
    SURFREF::SURFREF((SURFREF *)v6, this[12]);
    hbmSelectBitmap(**(_QWORD **)this[13], this[12], 1LL, 0LL);
    if ( v7 )
      SURFREF::vAltUnlockFast((SURFREF *)v6);
    SURFREF::~SURFREF((SURFREF *)v6);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
  }
  v5 = this[5];
  if ( v5 )
  {
    DEC_SHARE_REF_CNT(v5);
    v5 = this[5];
  }
  bDeleteSurface(*((_QWORD *)v5 + 4));
  this[5] = 0LL;
  this[13] = 0LL;
  this[12] = 0LL;
}
