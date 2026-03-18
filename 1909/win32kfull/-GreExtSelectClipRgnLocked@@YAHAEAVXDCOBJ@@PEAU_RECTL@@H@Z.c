/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00A3F38
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00A417C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00A44D0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A6F14 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct tagRECT *a2, int a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  DC *v7; // rcx
  ULONG v8; // ecx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  struct REGION *v13; // rax
  struct REGION *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  struct REGION *v15; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v8 = 87;
    goto LABEL_28;
  }
  v7 = *this;
  if ( !v7 )
  {
    v8 = 6;
LABEL_28:
    EngSetLastError(v8);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 == 5 )
    {
      v5 = DC::iSelectTightenRao(v7, 0LL, 5);
      DC::bTightenRao(*this);
      if ( v5 )
      {
        v13 = DC::prgnVisSnap(*this);
        if ( *((_DWORD *)v13 + 21) == 1 )
          return 1;
        else
          return (unsigned int)(*((_DWORD *)v13 + 20) > 0xA0u) + 2;
      }
    }
  }
  else
  {
    v9 = *((_QWORD *)v7 + 20);
    if ( v9
      && *(_DWORD *)(v9 + 80) == 160
      && (v10 = *(_OWORD *)(v9 + 88), v11 = *(_QWORD *)(v9 + 88), *(_OWORD *)v14 = v10, a2->left == (_DWORD)v11)
      && *(_QWORD *)&a2->top == __PAIR64__((unsigned int)v14[1], HIDWORD(v11))
      && a2->bottom == HIDWORD(v14[1]) )
    {
      v15 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
      return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v15);
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
      if ( v14[0] )
      {
        if ( (((a2->left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || (((a2->top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
          || IsRectEmptyInl(a2) )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
          return 0LL;
        }
        RGNOBJ::vSet((RGNOBJ *)v14, (struct _RECTL *)a2);
        v5 = DC::iSelectTightenRao(*this, v14[0], v4);
        DC::bTightenRao(*this);
        if ( v5 )
        {
          v15 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v14);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
      if ( LODWORD(v14[1]) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v14);
    }
  }
  return v5;
}
