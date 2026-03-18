/*
 * XREFs of ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C026E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DD60 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DFE4 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     McTemplateK0xtq @ 0x1C004A220 (McTemplateK0xtq.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 */

void __fastcall DpiIndirectCbDisableRenderD3RequestsWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char *v4; // rbx
  __int64 v5; // rax
  int Miniport; // eax
  __int64 v7; // rdx
  const GUID *v8; // r8
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-38h]
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int16 v15; // [rsp+48h] [rbp-18h]
  char v16; // [rsp+4Ah] [rbp-16h]
  PVOID v17; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+58h] [rbp-8h]
  struct _FDO_CONTEXT *v19; // [rsp+98h] [rbp+38h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v4 = (char *)qword_1C008ECE8;
    if ( qword_1C008ECE8 == &qword_1C008ECE8 )
      break;
    if ( *((void ***)qword_1C008ECE8 + 1) != &qword_1C008ECE8
      || (v5 = *(_QWORD *)qword_1C008ECE8, *(void **)(*(_QWORD *)qword_1C008ECE8 + 8LL) != qword_1C008ECE8) )
    {
      __fastfail(3u);
    }
    qword_1C008ECE8 = *(void **)qword_1C008ECE8;
    *(_QWORD *)(v5 + 8) = &qword_1C008ECE8;
    KeReleaseMutex(&Object, 0);
    v17 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v18 = 0;
    v13[0] = 0LL;
    v13[1] = *(_QWORD *)(v4 + 20);
    LODWORD(v13[0]) = 1;
    BYTE4(v13[0]) = 1;
    v16 = 0;
    Miniport = DpiIndirectGetMiniport(
                 (const struct DXGK_MINIPORT_FILTER *)v13,
                 (struct AUTO_REMOVE_LOCK *)&v17,
                 (struct AUTO_PNPPOWER_LOCK *)&v14,
                 &v19);
    v9 = Miniport;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    {
      LODWORD(v12) = Miniport;
      LODWORD(v11) = *((_DWORD *)v4 + 4);
      McTemplateK0xtq((unsigned int)v11, v7, v8, *(_QWORD *)(v4 + 20), v11, v12);
    }
    if ( v9 >= 0 )
    {
      v10 = *((_QWORD *)v19 + 3);
      if ( *((_DWORD *)v4 + 4) )
        DpiDisableD3Requests(v10);
      else
        DpiEnableD3Requests(v10);
    }
    operator delete(v4);
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v14);
    AUTO_REMOVE_LOCK::Release(&v17);
  }
  byte_1C008ECA8 = 0;
  KeReleaseMutex(&Object, 0);
  IoFreeWorkItem(IoWorkItem);
}
