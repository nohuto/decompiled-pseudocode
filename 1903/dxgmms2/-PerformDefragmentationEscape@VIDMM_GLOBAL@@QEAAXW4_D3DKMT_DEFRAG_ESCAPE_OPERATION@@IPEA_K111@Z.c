/*
 * XREFs of ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C00AE1D8
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00ABAD0 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00813B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PerformDefragmentationEscape(
        VIDMM_GLOBAL *this,
        int a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int i; // edi
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // r13
  int v13; // r15d
  VIDMM_GLOBAL *v14; // rcx
  _QWORD v15[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( a2 <= 0 )
    return;
  if ( a2 <= 2 )
  {
    v8 = 0;
    if ( !*((_DWORD *)this + 1748) )
      return;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2440LL) + 352LL * v8 + 16) & 4) == 0 )
        goto LABEL_23;
      v9 = *((_QWORD *)this + 5023) + 1560LL * v8;
      v10 = *(_DWORD *)(v9 + 20);
      v11 = v10 + *(_DWORD *)(v9 + 24);
      if ( v10 >= v11 )
        goto LABEL_23;
      while ( 1 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10);
        v13 = *(_DWORD *)(v12 + 80);
        if ( (v13 & 0x1001) == 0 )
          break;
        if ( ++v10 >= v11 )
          goto LABEL_23;
      }
      if ( v10 == -1 )
        goto LABEL_23;
      memset(v15, 0, 0x58uLL);
      LODWORD(v15[5]) = 0;
      LODWORD(v15[0]) = 126;
      HIDWORD(v15[0]) = v8;
      HIDWORD(v15[5]) = v10;
      v14 = this;
      v15[8] = 0LL;
      LODWORD(v15[10]) = a2 != 1;
      if ( (v13 & 0x10000) != 0 )
      {
        v15[9] = 0LL;
        LODWORD(v15[7]) = 1;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1) < 0 )
          goto LABEL_23;
        LODWORD(v15[7]) = 2;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1) < 0 )
          goto LABEL_23;
        LODWORD(v15[7]) = 3;
        v14 = this;
      }
      else
      {
        v15[9] = *(_QWORD *)(v12 + 48);
      }
      VIDMM_GLOBAL::QueueSystemCommandAndWait(v14, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
LABEL_23:
      if ( ++v8 >= *((_DWORD *)this + 1748) )
        return;
    }
  }
  if ( a2 <= 4 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1748); ++i )
    {
      v7 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(352LL * i + *(_QWORD *)(v7 + 2440) + 16) & 4) != 0 && (*(_DWORD *)(v7 + 1908) & 8) != 0 )
      {
        memset(v15, 0, 0x58uLL);
        LODWORD(v15[0]) = 126;
        HIDWORD(v15[0]) = i;
        LODWORD(v15[5]) = (a2 != 3) + 3;
        VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
      }
    }
  }
}
