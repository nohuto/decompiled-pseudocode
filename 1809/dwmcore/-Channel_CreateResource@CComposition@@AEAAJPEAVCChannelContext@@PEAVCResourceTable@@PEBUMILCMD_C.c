/*
 * XREFs of ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800CFA60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800644A8 (_anonymous_namespace_--AddToResourceCount.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800994F8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800CFC64 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqxqx @ 0x1801576E0 (McTemplateU0qqxqx.c)
 */

__int64 __fastcall CComposition::Channel_CreateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_CREATERESOURCE *a4)
{
  unsigned int v4; // edi
  HANDLE_TABLE *v6; // rcx
  unsigned int v8; // r8d
  _QWORD *v10; // r15
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // r8d
  _DWORD *v20; // rcx
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
    v23 = 45;
    goto LABEL_41;
  }
  v12 = *((_QWORD *)a3 + 5) + v4 * *((_DWORD *)a3 + 6);
  *(_QWORD *)(v12 + 8) = 0LL;
  v13 = CResourceFactory::Create(this, a2, *((unsigned int *)a4 + 2), &v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 50;
    goto LABEL_41;
  }
  v16 = v24;
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 40LL))(v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    v23 = 56;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v23);
    goto LABEL_20;
  }
  v17 = *((unsigned int *)a4 + 1);
  v15 = -2147024890;
  if ( !(_DWORD)v17
    || (unsigned int)v17 >= *((_DWORD *)a3 + 7)
    || (v18 = *((_QWORD *)a3 + 5) + (unsigned int)(v17 * *((_DWORD *)a3 + 6)), !*(_DWORD *)v18) )
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)(v18 + 8) = v16;
  v15 = 0;
  (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  v19 = *(_DWORD *)v18;
  v20 = (_DWORD *)*((_QWORD *)a3 + 7);
  if ( *(_DWORD *)v18 > 0x55u )
  {
    if ( v19 == 86 )
      goto LABEL_32;
    if ( v19 != 143 )
    {
      if ( v19 != 144 && v19 != 157 && v19 != 164 )
        goto LABEL_14;
LABEL_32:
      ++v20[28];
      goto LABEL_15;
    }
LABEL_31:
    ++v20[26];
    goto LABEL_15;
  }
  if ( v19 == 85 )
  {
    ++v20[29];
    goto LABEL_15;
  }
  if ( v19 == 29 )
  {
LABEL_35:
    ++v20[30];
    goto LABEL_15;
  }
  if ( v19 > 0x1E )
  {
    if ( v19 != 36 && v19 > 0x21 )
    {
      if ( v19 == 37 )
      {
        ++v20[31];
        goto LABEL_15;
      }
      if ( v19 != 39 )
        goto LABEL_14;
      goto LABEL_31;
    }
    goto LABEL_35;
  }
LABEL_14:
  ++v20[27];
LABEL_15:
  anonymous_namespace_::AddToResourceCount(v19, 1);
LABEL_16:
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v15, 0x39u);
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
LABEL_20:
  if ( v15 < 0 )
  {
    if ( v12 )
      CResourceTable::DeleteHandle(a3, *((_DWORD *)a4 + 1));
    ReleaseInterface<IBitmapLock>((__int64 *)&v24);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v15, 0x7EDu);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  return (unsigned int)v15;
}
