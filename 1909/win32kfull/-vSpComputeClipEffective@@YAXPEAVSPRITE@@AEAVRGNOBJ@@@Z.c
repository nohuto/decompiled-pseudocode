/*
 * XREFs of ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C027F3F0
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0281634 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0165E9C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x1C027EEF0 (-vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C027F8E4 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281414 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComputeClipEffective(struct SPRITE *a1, struct RGNOBJ *a2)
{
  struct _SURFOBJ *v4; // rdx
  bool v5; // si
  char v6; // al
  LONG v7; // r14d
  __int64 v8; // rax
  LONG v9; // edx
  LONG v10; // r10d
  LONG v11; // r9d
  LONG v12; // r8d
  LONG v13; // r12d
  __int64 v14; // rcx
  __int64 i; // rax
  LONG v16; // r10d
  LONG v17; // r11d
  int v18; // [rsp+28h] [rbp-120h]
  LONG v19; // [rsp+5Ch] [rbp-ECh]
  int v20; // [rsp+64h] [rbp-E4h]
  LONG v21; // [rsp+68h] [rbp-E0h]
  _QWORD v22[2]; // [rsp+70h] [rbp-D8h] BYREF
  LONG v23; // [rsp+80h] [rbp-C8h]
  LONG v24; // [rsp+84h] [rbp-C4h]
  int v25; // [rsp+88h] [rbp-C0h]
  LONG v26; // [rsp+8Ch] [rbp-BCh]
  LONG v27; // [rsp+90h] [rbp-B8h]
  LONG v28; // [rsp+94h] [rbp-B4h]
  LONG v29; // [rsp+98h] [rbp-B0h]
  __int64 v30; // [rsp+A0h] [rbp-A8h]
  __int64 v31; // [rsp+A8h] [rbp-A0h]
  _QWORD v32[2]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v33[3]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int8 *v34; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+E0h] [rbp-68h] BYREF
  struct _RECTL v36; // [rsp+F0h] [rbp-58h] BYREF
  struct _RECTL v37; // [rsp+100h] [rbp-48h] BYREF

  v35[0] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *((_DWORD *)a1 + 1) == 2 && (*(_DWORD *)a1 & 8) == 0 )
    {
      v4 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v4 )
      {
        if ( v4->iBitmapFormat == 6 && !v4->iType && SURFREFVIEW::bMap((SURFREFVIEW *)v35, v4) )
        {
          v5 = *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231);
          if ( (*((_BYTE *)a1 + 203) & 1) == 0 || (v6 = 1, *((_BYTE *)a1 + 202) != 0xFF) )
            v6 = 0;
          if ( v5 || v6 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
            if ( v33[0] && v22[0] && v32[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v32);
              RGNOBJ::vSet((RGNOBJ *)v22);
              RGNOBJ::vSet((RGNOBJ *)v33);
              v34 = 0LL;
              if ( v5 )
              {
                v36 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v36, &v34);
              }
              v7 = 0;
              v8 = *((_QWORD *)a1 + 16);
              v9 = *(_DWORD *)(v8 + 32);
              v19 = v9;
              v23 = v9;
              v10 = *(_DWORD *)(v8 + 36);
              v21 = v10;
              v24 = v10;
              v11 = -1;
              v12 = -1;
              v20 = *(_DWORD *)(v8 + 64);
              v25 = v20;
              v13 = 0;
              v14 = *(_QWORD *)(v8 + 56);
              while ( 1 )
              {
                v33[2] = v14;
                v31 = v14;
                v28 = v13;
                if ( v13 >= v10 )
                  break;
                v7 = 0;
                for ( i = v14; ; i += 4LL )
                {
                  v30 = i;
                  v16 = v7;
                  v26 = v7;
                  v29 = v12;
                  v17 = v11;
                  v27 = v11;
                  if ( v7 >= v9 )
                    break;
                  if ( *(_BYTE *)(i + 3) )
                  {
                    v11 = v28;
                    if ( v12 != -1 )
                    {
                      v11 = v17;
                      v16 = v29;
                    }
                    v12 = v16;
                  }
                  else if ( v12 != -1 )
                  {
                    vSpAddOpaqueRects(
                      v7,
                      v13,
                      v12,
                      v11,
                      v9,
                      v18,
                      (struct RGNMEMOBJTMP *)v22,
                      (struct RGNMEMOBJTMP *)v33,
                      (struct RGNOBJ *)v32);
                    v12 = -1;
                    v11 = -1;
                    i = v30;
                  }
                  ++v7;
                  v9 = v19;
                }
                ++v13;
                v14 = v20 + v31;
                v10 = v21;
              }
              if ( v12 != -1 )
                vSpAddOpaqueRects(
                  v7,
                  v13,
                  v12,
                  v11,
                  v9,
                  v18,
                  (struct RGNMEMOBJTMP *)v22,
                  (struct RGNMEMOBJTMP *)v33,
                  (struct RGNOBJ *)v32);
              if ( v5 )
              {
                v37 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpDeletePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v37, v34);
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)v22, (struct RGNOBJ *)v32, a2, BYTE1(gafjRgnOp)) )
                RGNOBJ::vSwap((RGNOBJ *)v22, a2);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
          }
          else if ( !*((_BYTE *)a1 + 202) )
          {
            RGNOBJ::vSet(a2);
          }
        }
      }
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
}
