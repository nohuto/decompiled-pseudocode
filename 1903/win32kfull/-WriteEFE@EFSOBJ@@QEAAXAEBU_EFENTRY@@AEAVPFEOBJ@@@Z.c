/*
 * XREFs of ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C004DDF8
 * Callers:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C004D6C8 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C004DA70 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     cjCopyFontDataW @ 0x1C004DFF0 (cjCopyFontDataW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C00787F8 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall EFSOBJ::WriteEFE(wchar_t ***this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  wchar_t **v6; // r9
  wchar_t *Src; // r12
  BOOL v8; // r15d
  int v9; // edi
  wchar_t *v10; // rcx
  char v11; // cl
  void *v12; // rax
  const void *v13; // rsi
  int v14; // [rsp+38h] [rbp-40h]
  unsigned int Size; // [rsp+90h] [rbp+18h]
  __int64 Sizea; // [rsp+90h] [rbp+18h]

  *((_DWORD *)*this + 16) += *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  v6 = *this;
  if ( !*((_DWORD *)*this + 7) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 128LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
    }
    else if ( v6[5] + 4 <= v6[6] || (unsigned int)EFSOBJ::bGrow((EFSOBJ *)this) )
    {
      *(_QWORD *)(*this)[5] = *(_QWORD *)a2;
      (*this)[5] += 4;
      Src = 0LL;
      v8 = 0;
      v9 = 1;
      v10 = **this;
      if ( v10 )
      {
        Src = **this;
        if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
        {
          v8 = 1;
          LOBYTE(v9) = *((_BYTE *)a2 + 5);
        }
        else
        {
          v8 = (*((_BYTE *)v10 + 129) & 1) == 0;
          LOBYTE(v9) = *((_BYTE *)v10 + 128);
        }
        v9 = (unsigned __int8)v9;
      }
      else
      {
        v11 = *((_BYTE *)a2 + 4);
        if ( (v11 & 1) != 0 )
          Src = (wchar_t *)((char *)gpfsTable + 196 * *((unsigned __int16 *)a2 + 3));
        if ( (v11 & 2) != 0 )
        {
          v8 = 1;
          v9 = *((unsigned __int8 *)a2 + 5);
        }
      }
      Size = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
      v12 = (void *)AllocFreeTmpBuffer(Size);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, Size);
        Sizea = cjCopyFontDataW((int)(*this)[4], (int)v13, (int)a3, *(_DWORD *)a2, Src, v9, v8, v14);
        memmove((*this)[2], v13, Sizea);
        FreeTmpBuffer(v13);
        (*this)[2] = (wchar_t *)((char *)(*this)[2] + Sizea);
        *((_DWORD *)*this + 6) -= Sizea;
      }
      else
      {
        *((_DWORD *)*this + 7) = 8;
      }
    }
    else
    {
      *((_DWORD *)*this + 7) = 14;
    }
  }
}
