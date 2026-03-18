/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00B258C
 * Callers:
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00B2558 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00890E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00B26A4 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00B2788 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  char *v6; // r15
  int *v10; // r14
  unsigned __int64 v11; // rbp
  int v12; // edi
  COPMProtectedOutput *PoolWithTag; // rax
  COPMProtectedOutput *v14; // rax
  COPMProtectedOutput *v15; // rsi
  struct _KMUTANT *v16; // rcx
  COPM *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = this;
  v6 = (char *)P;
  OPM::CMutex::Lock((void **)P + 6);
  v10 = a6;
  v11 = 0LL;
  v12 = 0;
  LODWORD(v18) = 0;
  *a6 = 0;
  PoolWithTag = (COPMProtectedOutput *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v14 = COPMProtectedOutput::COPMProtectedOutput(PoolWithTag, a2, a3, a4, (int *)&v18);
    v12 = (int)v18;
    v15 = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    if ( v12 >= 0 )
    {
      v12 = OPM::CList<COPMProtectedOutput>::AddElement(v6 + 24, v15, &v18);
      if ( v12 >= 0 )
      {
        v11 = (unsigned int)v18;
        v12 = 0;
      }
      if ( v12 >= 0 )
      {
        *a5 = (void *)v11;
LABEL_9:
        v12 = 0;
        goto LABEL_10;
      }
    }
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v15)(v15, 1LL);
    if ( v12 == -1073741198 )
    {
      *v10 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = -1073741801;
  }
LABEL_10:
  v16 = (struct _KMUTANT *)*((_QWORD *)v6 + 6);
  if ( v16 )
    KeReleaseMutex(v16, 0);
  return (unsigned int)v12;
}
