/*
 * XREFs of McTemplateK0pqqXR2qqddddddddtqt @ 0x1C002C898
 * Callers:
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C002ABC4 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C0025A44 (McGenEventWrite.c)
 */

ULONG McTemplateK0pqqXR2qqddddddddtqt(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-D0h] BYREF
  va_list v5; // [rsp+40h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  va_list v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  va_list v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h]
  int v12; // [rsp+78h] [rbp-88h]
  int v13; // [rsp+7Ch] [rbp-84h]
  va_list v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  va_list v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  va_list v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  va_list v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  va_list v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  va_list v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  va_list v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  va_list v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  va_list v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  va_list v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  va_list v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  va_list v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  va_list v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+188h] [rbp+88h] BYREF
  va_list va; // [rsp+188h] [rbp+88h]
  __int64 v42; // [rsp+190h] [rbp+90h] BYREF
  va_list va1; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h] BYREF
  va_list va2; // [rsp+198h] [rbp+98h]
  __int64 v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va3; // [rsp+1A8h] [rbp+A8h]
  __int64 v49; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va4; // [rsp+1B0h] [rbp+B0h]
  __int64 v51; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va5; // [rsp+1B8h] [rbp+B8h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va6; // [rsp+1C0h] [rbp+C0h]
  __int64 v55; // [rsp+1C8h] [rbp+C8h] BYREF
  va_list va7; // [rsp+1C8h] [rbp+C8h]
  __int64 v57; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va8; // [rsp+1D0h] [rbp+D0h]
  __int64 v59; // [rsp+1D8h] [rbp+D8h] BYREF
  va_list va9; // [rsp+1D8h] [rbp+D8h]
  __int64 v61; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va10; // [rsp+1E0h] [rbp+E0h]
  __int64 v63; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va11; // [rsp+1E8h] [rbp+E8h]
  __int64 v65; // [rsp+1F0h] [rbp+F0h] BYREF
  va_list va12; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h] BYREF
  va_list va13; // [rsp+1F8h] [rbp+F8h]
  __int64 v69; // [rsp+200h] [rbp+100h] BYREF
  va_list va14; // [rsp+200h] [rbp+100h]
  va_list va15; // [rsp+208h] [rbp+108h] BYREF

  va_start(va15, a3);
  va_start(va14, a3);
  va_start(va13, a3);
  va_start(va12, a3);
  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v40 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v44 = va_arg(va3, _QWORD);
  v46 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v47 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v49 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v51 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v53 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v55 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v57 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v59 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v61 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v63 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v65 = va_arg(va13, _QWORD);
  va_copy(va14, va13);
  v67 = va_arg(va14, _QWORD);
  va_copy(va15, va14);
  v69 = va_arg(va15, _QWORD);
  v6 = 8LL;
  v13 = 0;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  v11 = v46;
  v12 = 8 * v44;
  va_copy(v14, va3);
  va_copy(v16, va4);
  va_copy(v18, va5);
  va_copy(v20, va6);
  va_copy(v22, va7);
  va_copy(v24, va8);
  va_copy(v26, va9);
  va_copy(v28, va10);
  va_copy(v30, va11);
  va_copy(v32, va12);
  va_copy(v34, va13);
  va_copy(v36, va14);
  va_copy(v38, va15);
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &MMIOFlipMultiPlaneOverlay3,
           a3,
           0x12u,
           &EventData);
}
