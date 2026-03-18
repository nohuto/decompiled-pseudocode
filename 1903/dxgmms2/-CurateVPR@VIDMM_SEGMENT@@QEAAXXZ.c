/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BF430
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0phhhqqx @ 0x1C002939C (McTemplateK0phhhqqx.c)
 *     McTemplateK0phhhxxqqx @ 0x1C0029468 (McTemplateK0phhhxxqqx.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AE4FC (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 *     Percentagex100 @ 0x1C00C0AF8 (Percentagex100.c)
 *     ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1C00C80A4 (-CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  bool v2; // zf
  int v3; // esi
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r10d
  __int16 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  bool v29; // [rsp+80h] [rbp+8h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v30; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = bTracingEnabled == 0;
    *((_BYTE *)this + 448) = 1;
    if ( !v2 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        LOWORD(v3) = 0;
      else
        v3 = *((_DWORD *)this + 4) + 1;
      VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        Percentagex100(*((_QWORD *)this + 55), *((_QWORD *)this + 54));
        Percentagex100((unsigned int)dword_1C004E438, (unsigned int)dword_1C004E43C);
        v28 = v4;
        LOWORD(v27) = v3;
        LOWORD(v26) = *((_WORD *)this + 190);
        McTemplateK0phhhxxqqx(v6, v5, v7, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
    }
    v8 = *((_QWORD *)this + 54);
    v9 = *((_QWORD *)this + 55);
    if ( v9 < v8 * (unsigned __int64)(unsigned int)dword_1C004E438 / (unsigned int)dword_1C004E43C )
    {
      v10 = VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v12 = v8 - v9;
      v13 = (unsigned int)dword_1C004E444;
      v14 = (unsigned __int64)(unsigned int)dword_1C004E440 * v12 % (unsigned int)dword_1C004E444;
      if ( v10 < (unsigned __int64)(unsigned int)dword_1C004E440 * v12 / (unsigned int)dword_1C004E444 )
      {
        v30 = 0LL;
        v29 = 0;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          Percentagex100(v10, v12);
          Percentagex100(v15, v13);
          LODWORD(v28) = v16;
          LOWORD(v27) = v17;
          LOWORD(v26) = *((_WORD *)this + 190);
          McTemplateK0phhhqqx(v19, v18, v20, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
        }
        v21 = VIDMM_GLOBAL::PrepareMoveResources(
                *((VIDMM_GLOBAL **)this + 1),
                v14,
                v11,
                *((_DWORD *)this + 4),
                v26,
                v27,
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 53),
                v28,
                &v29,
                &v30);
        v24 = v21;
        if ( v21 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22);
          v25[4] = v30;
          v25[3] = v24;
          v25[5] = v29;
          WdLogEvent5_WdWarning(v25);
        }
      }
    }
  }
}
