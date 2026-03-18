/*
 * XREFs of ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0042CDC
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1C024CAF0 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025990C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0111E80 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C013E744 (--0DXGPRESENT@@QEAA@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CopyPresentArgs(DXGPRESENT **this, struct _D3DKMT_PRESENT *a2, struct DXGPROCESS *a3)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  _QWORD *v8; // rax
  DXGPRESENT *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax

  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_WORD *)&Value & 0x8000) != 0 )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 || a2->pPresentRegions )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
      v8[3] = -1073741811LL;
      v8[4] = this;
      v8[5] = a2->Flags.Value;
      v8[6] = a2->pPresentRegions;
      WdLogEvent5_WdError(v8);
      return 3221225485LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v9 = this[19];
    if ( v9 )
      goto LABEL_11;
    v9 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    if ( v9 )
      v9 = DXGPRESENT::DXGPRESENT(v9, *((_DWORD *)this[2] + 434));
    this[19] = v9;
    if ( v9 )
    {
LABEL_11:
      *((_BYTE *)this + 450) = 1;
      return DXGPRESENT::CopyPresentArgs(v9, (struct DXGCONTEXT *)this, a2);
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
      v14[3] = -1073741801LL;
      v14[4] = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL);
      v14[5] = a3;
      v14[6] = this;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
  }
}
