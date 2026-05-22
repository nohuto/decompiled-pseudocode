/*
 * XREFs of ?DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800C8448
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800C9020 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall InputETW::DragNDrop::DragEndedLegacy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // edi
  __int64 v8; // rsi
  int v9; // ebx
  struct InputETW *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  char *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 v43; // [rsp+170h] [rbp+70h] BYREF

  v43 = a3;
  v7 = a4;
  v8 = a1;
  v9 = a2;
  v14 = a2;
  v15 = a4;
  v10 = InputETW::Instance();
  v11 = *((_QWORD *)v10 + 1);
  if ( *(_DWORD *)v11 > 5u && (*(_BYTE *)(v11 + 16) & 1) != 0 )
  {
    v10 = (struct InputETW *)(*(_QWORD *)(v11 + 24) & 1LL);
    if ( v10 == *(struct InputETW **)(v11 + 24) )
    {
      v10 = InputETW::Instance();
      v12 = *((_QWORD *)v10 + 1);
      if ( *(_DWORD *)v12 > 5u && (*(_BYTE *)(v12 + 16) & 1) != 0 )
      {
        v10 = (struct InputETW *)(*(_QWORD *)(v12 + 24) & 1LL);
        if ( v10 == *(struct InputETW **)(v12 + 24) )
        {
          v16 = v8;
          v23 = &v16;
          v17 = v9;
          v25 = &v17;
          v14 = SHIDWORD(v14);
          v27 = &v14;
          v29 = &v43;
          v18 = v7;
          v31 = &v18;
          v15 = SHIDWORD(v15);
          v33 = &v15;
          v35 = &a5;
          v19 = (int)a6;
          v37 = &v19;
          v20 = SHIDWORD(a6);
          v39 = &v20;
          v21 = a7;
          v41 = &v21;
          v24 = 8LL;
          v26 = 8LL;
          v28 = 8LL;
          v30 = 8LL;
          v32 = 8LL;
          v34 = 8LL;
          v36 = 8LL;
          v38 = 8LL;
          v40 = 8LL;
          v42 = 8LL;
          LODWORD(v10) = TlgWrite((TraceLoggingHProvider)v12, &unk_18016B009, 0LL, 0LL, 0xCu, &pData);
        }
      }
    }
  }
  return (int)v10;
}
