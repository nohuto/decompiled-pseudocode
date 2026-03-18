/*
 * XREFs of GreSelectFontInternal @ 0x1C013BF24
 * Callers:
 *     NtGdiSelectFont @ 0x1C00115D0 (NtGdiSelectFont.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rax
  struct LFONT *v10; // rsi
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v4 = 0LL;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  v7 = v12;
  if ( v12 )
  {
    if ( !a3 && (*(_DWORD *)(HmgPentryFromPobj(v12) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_12;
    v8 = *(__int64 **)(v7 + 160);
    if ( v8 )
      v4 = *v8;
    if ( a2 == v4 )
      goto LABEL_12;
    LOBYTE(v6) = 10;
    v9 = HmgShareLockCheck(a2, v6);
    v10 = (struct LFONT *)v9;
    if ( v9 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v7 + 160));
        *(_QWORD *)(v7 + 160) = v10;
        *(_QWORD *)(*(_QWORD *)(v7 + 80) + 176LL) = a2;
        *(_QWORD *)(v7 + 2136) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v7 + 80) + 8LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v7 + 80) + 8LL) &= ~0x20u;
LABEL_12:
        XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
        return v4;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
    }
    v4 = 0LL;
    goto LABEL_12;
  }
  return v4;
}
