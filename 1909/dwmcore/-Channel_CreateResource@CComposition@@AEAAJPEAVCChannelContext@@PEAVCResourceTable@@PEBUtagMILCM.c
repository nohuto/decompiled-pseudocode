/*
 * XREFs of ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x18009A898
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180054A00 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x18009AA90 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C0960 (_anonymous_namespace_--AddToResourceCount.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqxqx @ 0x1801786D0 (McTemplateU0qqxqx.c)
 */

__int64 __fastcall CComposition::Channel_CreateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4)
{
  unsigned int v4; // edi
  HANDLE_TABLE *v6; // rcx
  unsigned int v8; // r8d
  _QWORD *v10; // r15
  __int64 v12; // r14
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // ebx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  int *v18; // rdi
  unsigned int v19; // r8d
  _DWORD *v20; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+80h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  v6 = (struct CResourceTable *)((char *)a3 + 16);
  v8 = *((_DWORD *)a4 + 2);
  v10 = 0LL;
  v24 = 0LL;
  v12 = 0LL;
  v13 = HANDLE_TABLE::AssignEntry(v6, v4, v8);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 42;
    goto LABEL_42;
  }
  v12 = *((_QWORD *)a3 + 5) + v4 * *((_DWORD *)a3 + 6);
  *(_QWORD *)(v12 + 8) = 0LL;
  v13 = CResourceFactory::Create(this, a2, *((unsigned int *)a4 + 2), &v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 47;
    goto LABEL_42;
  }
  v16 = v24;
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 40LL))(v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 53;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v23, 0LL);
    goto LABEL_21;
  }
  v17 = *((unsigned int *)a4 + 1);
  v15 = -2147024890;
  if ( !(_DWORD)v17
    || (unsigned int)v17 >= *((_DWORD *)a3 + 7)
    || (v18 = (int *)(*((_QWORD *)a3 + 5) + (unsigned int)(v17 * *((_DWORD *)a3 + 6))), !*v18) )
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_17;
  *((_QWORD *)v18 + 1) = v16;
  v15 = 0;
  (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  v19 = *v18;
  v20 = (_DWORD *)*((_QWORD *)a3 + 7);
  if ( *v18 <= 42 )
  {
    if ( v19 != 42 )
    {
      if ( v19 == 29 || v19 == 31 || v19 == 33 || v19 == 35 || v19 == 38 )
      {
        ++v20[30];
        goto LABEL_16;
      }
      if ( v19 == 39 )
      {
        ++v20[31];
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    goto LABEL_36;
  }
  switch ( v19 )
  {
    case 0x5Au:
      ++v20[29];
      goto LABEL_16;
    case 0x5Bu:
      goto LABEL_25;
    case 0xAEu:
LABEL_36:
      ++v20[26];
      goto LABEL_16;
    case 0xAFu:
    case 0xBDu:
    case 0xC5u:
LABEL_25:
      ++v20[28];
      goto LABEL_16;
  }
LABEL_15:
  ++v20[27];
LABEL_16:
  anonymous_namespace_::AddToResourceCount(v19, 1LL);
LABEL_17:
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v15, 0x36u, 0LL);
  }
  else
  {
    v16[6] = a2;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0qqxqx(
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 1),
        *((_DWORD *)a4 + 2),
        (char)v16);
    v24 = 0LL;
    v10 = v16;
    v12 = 0LL;
  }
LABEL_21:
  if ( v15 < 0 )
  {
    if ( v12 )
      CResourceTable::DeleteHandle(a3, *((_DWORD *)a4 + 1));
    ReleaseInterface<IBitmapLock>((__int64 *)&v24);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v15, 0x76Eu, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  return (unsigned int)v15;
}
