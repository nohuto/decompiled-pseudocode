/*
 * XREFs of ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18002260C
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180024880 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall InputETW::DragNDrop::DragEnded(unsigned int a1, int *a2, int *a3, int *a4, char a5, unsigned int a6)
{
  __int64 v7; // r14
  struct InputETW *v10; // rax
  _DWORD *v11; // r10
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  __int64 *v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  __int64 *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  char *v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]
  __int64 *v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]

  v7 = a1;
  v10 = InputETW::Instance();
  v11 = (_DWORD *)*((_QWORD *)v10 + 1);
  if ( v11 )
  {
    if ( *v11 > 1u )
    {
      v10 = InputETW::Instance();
      v12 = *((_QWORD *)v10 + 1);
      if ( *(_DWORD *)v12 > 5u && (*(_BYTE *)(v12 + 16) & 1) != 0 )
      {
        v10 = (struct InputETW *)(*(_QWORD *)(v12 + 24) & 1LL);
        if ( v10 == *(struct InputETW **)(v12 + 24) )
        {
          v25 = 0;
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v46 = 0;
          v49 = 0;
          v23 = &v14;
          v15 = *a2;
          v26 = &v15;
          v16 = a2[1];
          v29 = &v16;
          v17 = *a3;
          v32 = &v17;
          v18 = a3[1];
          v35 = &v18;
          v19 = *a4;
          v38 = &v19;
          v20 = a4[1];
          v41 = &v20;
          v44 = &a5;
          v21 = a6;
          v47 = &v21;
          v14 = v7;
          v24 = 8;
          v27 = 8;
          v30 = 8;
          v33 = 8;
          v36 = 8;
          v39 = 8;
          v42 = 8;
          v45 = 8;
          v48 = 8;
          LODWORD(v10) = TlgWrite((TraceLoggingHProvider)v12, &unk_180166619, 0LL, 0LL, 0xBu, &pData);
        }
      }
    }
  }
  return (int)v10;
}
