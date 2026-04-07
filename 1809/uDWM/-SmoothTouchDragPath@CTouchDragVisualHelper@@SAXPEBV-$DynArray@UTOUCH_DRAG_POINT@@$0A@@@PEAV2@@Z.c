/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x180096FEC
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180098684 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x180096EA8 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180096F38 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int128 *v7; // r10
  __int128 v8; // xmm0
  __int128 *v9; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // xmm1_8
  __int128 *v27; // rdx
  __int128 v28; // xmm0
  int v29; // eax
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int128 *MidPoint; // rax
  __int128 *v33; // r10
  __int64 v34; // r9
  __int64 v35; // xmm1_8
  __int128 v36; // xmm0
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int64 v39; // xmm1_8
  float v40; // xmm12_4
  float v41; // xmm14_4
  float v42; // xmm11_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm7_4
  float v46; // xmm8_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm7_4
  float v55; // xmm8_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm0_4
  __int64 v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  unsigned int v64; // [rsp+38h] [rbp-D0h]
  _BYTE v65[24]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+70h] [rbp-98h]
  int v68; // [rsp+78h] [rbp-90h]
  __int128 v69; // [rsp+80h] [rbp-88h] BYREF
  __int64 v70; // [rsp+90h] [rbp-78h] BYREF
  int v71; // [rsp+98h] [rbp-70h]
  __int128 v72; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-58h]
  int v74; // [rsp+B8h] [rbp-50h]
  __int128 v75; // [rsp+C0h] [rbp-48h]
  __int128 v76; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-18h]
  int v78; // [rsp+F8h] [rbp-10h]
  __int128 v79; // [rsp+100h] [rbp-8h] BYREF
  __int64 v80; // [rsp+110h] [rbp+8h]
  int v81; // [rsp+118h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 6);
  *(_DWORD *)(a2 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 0x1Cu);
  v5 = 0;
  if ( v2 )
  {
    v6 = v64;
    do
    {
      v7 = (__int128 *)*a1;
      if ( v5 + 4 <= v2 )
      {
        if ( v5 )
        {
          MidPoint = (__int128 *)CTouchDragVisualHelper::GetMidPoint(
                                   (__int64)v65,
                                   (__int64)v7 + 28 * v5,
                                   (__int64)v7 + 28 * v5 + 28);
          v33 = (__int128 *)*a1;
          v35 = *(_QWORD *)(*a1 + v34 + 16);
          v75 = *MidPoint;
          v36 = *(__int128 *)((char *)v33 + v34);
          v27 = (__int128 *)((char *)v33 + 28 * v5 + 56);
          v74 = *(_DWORD *)((char *)v33 + v34 + 24);
          v73 = v35;
          v30 = *((_QWORD *)v27 + 2);
          v72 = v36;
          v31 = *v27;
          v29 = *((_DWORD *)v27 + 6);
          v24 = (__int64)v33 + 28 * v5 + 84;
        }
        else
        {
          v24 = (__int64)v7 + 84;
          v25 = *((_DWORD *)v7 + 13);
          v26 = *(_QWORD *)((char *)v7 + 44);
          v27 = &v76;
          v75 = *v7;
          v74 = v25;
          v28 = *(__int128 *)((char *)v7 + 28);
          v29 = *((_DWORD *)v7 + 20);
          v73 = v26;
          v30 = *((_QWORD *)v7 + 9);
          v72 = v28;
          v31 = *(__int128 *)((char *)v7 + 56);
        }
        v77 = v30;
        v76 = v31;
        v78 = v29;
        v37 = CTouchDragVisualHelper::GetMidPoint((__int64)v65, (__int64)v27, v24);
        v38 = *(_OWORD *)v37;
        v39 = *(_QWORD *)(v37 + 16);
        LODWORD(v37) = *(_DWORD *)(v37 + 24);
        v66 = v38;
        v68 = v37;
        v67 = v39;
      }
      else
      {
        if ( v5 )
        {
          v11 = CTouchDragVisualHelper::GetMidPoint((__int64)v65, (__int64)v7 + 28 * v5, (__int64)v7 + 28 * v5 + 28);
          v7 = (__int128 *)*a1;
          v12 = *(_OWORD *)v11;
          v13 = *(_QWORD *)(v11 + 16);
          v81 = *(_DWORD *)(v11 + 24);
          v9 = &v79;
          v79 = v12;
          v80 = v13;
        }
        else
        {
          v8 = *v7;
          v71 = *((_DWORD *)v7 + 6);
          v9 = &v69;
          v10 = *((_QWORD *)v7 + 2);
          v69 = v8;
          v70 = v10;
        }
        v14 = v5 + 1;
        v75 = *v9;
        v15 = *(__int128 *)((char *)v7 + 28 * v14);
        v16 = *(_QWORD *)((char *)v7 + 28 * v14 + 16);
        v74 = *((_DWORD *)v7 + 7 * v14 + 6);
        v73 = v16;
        v72 = v15;
        if ( v5 + 3 <= v2 )
          v17 = (__int128 *)((char *)v7 + 28 * v5 + 56);
        else
          v17 = &v72;
        v18 = *v17;
        v19 = *((_QWORD *)v17 + 2);
        v20 = *((_DWORD *)v17 + 6);
        v66 = v18;
        v68 = v20;
        v67 = v19;
        v21 = CTouchDragVisualHelper::GetMidPoint((__int64)v65, (__int64)&v72, (__int64)&v66);
        v5 = v2;
        v22 = *(_OWORD *)v21;
        v23 = *(_QWORD *)(v21 + 16);
        LODWORD(v21) = *(_DWORD *)(v21 + 24);
        v76 = v22;
        v78 = v21;
        v77 = v23;
      }
      v40 = 0.0;
      v41 = (float)(v75 - v66);
      do
      {
        v42 = 1.0 - v40;
        HIDWORD(v69) = 1056964608;
        v43 = (float)(1.0 - v40) * 3.0;
        v44 = v42 * (float)(v42 * v42);
        v45 = *((float *)&v75 + 1) * v44;
        v46 = *((float *)&v75 + 2) * v44;
        v47 = (float)((float)(1.0 - v40) * v43) * v40;
        v48 = (float)(v43 * v40) * v40;
        v49 = *((float *)&v72 + 1) * v47;
        v50 = *((float *)&v72 + 2) * v47;
        v51 = (float)(v40 * v40) * v40;
        *((float *)&v69 + 1) = (float)(*((float *)&v66 + 1) * v51)
                             + (float)((float)(*((float *)&v76 + 1) * v48) + (float)(v49 + v45));
        *((float *)&v69 + 2) = (float)(*((float *)&v66 + 2) * v51)
                             + (float)((float)(*((float *)&v76 + 2) * v48) + (float)(v50 + v46));
        v52 = (float)((float)(v40 - 1.0) * 3.0) * (float)(1.0 - v40);
        v53 = (float)((float)((float)((float)(v40 - 1.0) + (float)(v40 - 1.0)) * v40) + (float)(v42 * v42)) * 3.0;
        v54 = (float)(*((float *)&v75 + 1) * v52) + (float)(*((float *)&v72 + 1) * v53);
        v55 = (float)(*((float *)&v75 + 2) * v52) + (float)(*((float *)&v72 + 2) * v53);
        v56 = (float)((float)((float)((float)(1.0 - v40) + (float)(1.0 - v40)) * v40) - (float)(v40 * v40)) * 3.0;
        v57 = *((float *)&v76 + 1) * v56;
        v58 = *((float *)&v76 + 2) * v56;
        v59 = (float)(v40 * 3.0) * v40;
        v71 = 0;
        LODWORD(v70) = COERCE_UNSIGNED_INT((float)(*((float *)&v66 + 2) * v59) + (float)(v58 + v55)) ^ _xmm;
        *((float *)&v70 + 1) = (float)(*((float *)&v66 + 1) * v59) + (float)(v57 + v54);
        CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v70);
        v60 = *(unsigned int *)(a2 + 24);
        LODWORD(v69) = v66 + (int)(float)((float)(1.0 - v40) * v41);
        v61 = v60 + 1;
        if ( (int)v60 + 1 >= (unsigned int)v60 )
          v6 = v60 + 1;
        if ( v61 >= (unsigned int)v60 )
        {
          if ( v6 > *(_DWORD *)(a2 + 20) )
          {
            v63 = DynArrayImpl<0>::AddMultipleAndSet(a2, 0x1Cu, 1, &v69);
            if ( v63 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0xC0u);
          }
          else
          {
            v62 = *(_QWORD *)a2 + 28 * v60;
            *(_OWORD *)v62 = v69;
            *(_QWORD *)(v62 + 16) = v70;
            *(_DWORD *)(v62 + 24) = v71;
            *(_DWORD *)(a2 + 24) = v6;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61 < (unsigned int)v60 ? 0x80070216 : 0, 0xB5u);
        }
        v40 = v40 + 0.2;
      }
      while ( v40 < 1.0 );
      v5 += 2;
    }
    while ( v5 < v2 );
  }
}
