/*
 * XREFs of NtGdiEngAssociateSurface @ 0x1C0127E30
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C0127F24 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C0128144 (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, HDEV a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  HDEV v10; // rax
  FLONG v11; // ebx
  HDEV v12; // r10
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  HDEV v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  SURFREF::SURFREF((SURFREF *)v14);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v15 = v8;
  v9 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
    {
      v10 = ValidUmpdHdev(a2);
      if ( v10 )
      {
        v11 = a3 & 0xFFFFB7EF;
        v16 = v10;
        if ( (v11 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v16, v11) )
          v6 = EngAssociateSurface(hsurf, v12, v11);
        PDEVOBJ::vUnreferencePdev(&v16, 0LL);
      }
      v9 = v15;
    }
    if ( v9 )
      DEC_SHARE_REF_CNT(v9);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v6;
}
