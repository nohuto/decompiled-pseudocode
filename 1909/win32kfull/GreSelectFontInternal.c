/*
 * XREFs of GreSelectFontInternal @ 0x1C01670A4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiSelectFont @ 0x1C012B510 (NtGdiSelectFont.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  struct LFONT *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+2Ch] [rbp-4h]

  v4 = 0LL;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  v7 = v12;
  if ( v12 )
  {
    if ( !a3 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj(v12) + 8) & 0xFFFFFFFE) == 0 )
      {
LABEL_13:
        XDCOBJ::vUnlockFast((XDCOBJ *)&v12);
        return v4;
      }
      v7 = v12;
    }
    v8 = *(__int64 **)(v7 + 152);
    if ( v8 )
      v4 = *v8;
    if ( a2 == v4 )
      goto LABEL_13;
    LOBYTE(v6) = 10;
    v9 = HmgShareLockCheck(a2, v6);
    v10 = (struct LFONT *)v9;
    if ( v9 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v12 + 152));
        *(_QWORD *)(v12 + 152) = v10;
        *(_QWORD *)(*(_QWORD *)(v12 + 976) + 296LL) = a2;
        *(_QWORD *)(v12 + 1728) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v12 + 976) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v12 + 976) + 152LL) &= ~0x20u;
        goto LABEL_13;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
    }
    v4 = 0LL;
    goto LABEL_13;
  }
  return v4;
}
