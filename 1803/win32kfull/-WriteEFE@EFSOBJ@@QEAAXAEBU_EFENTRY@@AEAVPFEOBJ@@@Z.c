/*
 * XREFs of ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00CBA48
 * Callers:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C00CBC28 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 * Callees:
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C00CB960 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     cjCopyFontDataW @ 0x1C00CD24C (cjCopyFontDataW.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall EFSOBJ::WriteEFE(EFSOBJ *this, const struct _EFENTRY *a2, struct PFEOBJ *a3)
{
  __int64 *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // r15
  BOOL v11; // r14d
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // r13d
  void *v15; // rax
  const void *v16; // rsi
  size_t v18; // [rsp+98h] [rbp+20h]

  *(_DWORD *)(*(_QWORD *)this + 64LL) += *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  v6 = *(__int64 **)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) && v6[2] )
  {
    if ( *((_DWORD *)v6 + 6) < *(_DWORD *)(*(_QWORD *)a3 + 128LL) )
    {
      *((_DWORD *)v6 + 7) = 111;
      return;
    }
    if ( v6[5] + 8 > (unsigned __int64)v6[6] && !(unsigned int)EFSOBJ::bGrow(this) )
    {
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 14;
      return;
    }
    v7 = HIWORD(*(_QWORD *)a2);
    v8 = *(_QWORD *)a2 >> 40;
    v9 = HIDWORD(*(_QWORD *)a2);
    **(_QWORD **)(*(_QWORD *)this + 40LL) = *(_QWORD *)a2;
    *(_QWORD *)(*(_QWORD *)this + 40LL) += 8LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 1;
    v13 = **(_QWORD **)this;
    if ( v13 )
    {
      v10 = **(char ***)this;
      if ( (v9 & 2) == 0 )
      {
        v11 = (*(_BYTE *)(v13 + 129) & 1) == 0;
        LOBYTE(v8) = *(_BYTE *)(v13 + 128);
        goto LABEL_10;
      }
    }
    else
    {
      if ( (v9 & 1) != 0 )
        v10 = (char *)gpfsTable + 196 * v7;
      if ( (v9 & 2) == 0 )
        goto LABEL_11;
    }
    v11 = 1;
LABEL_10:
    v12 = (unsigned __int8)v8;
LABEL_11:
    v14 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
    v15 = (void *)AllocFreeTmpBuffer(v14);
    v16 = v15;
    if ( v15 )
    {
      memset(v15, 0, v14);
      v18 = cjCopyFontDataW(*(_QWORD *)(*(_QWORD *)this + 32LL), v16, a3, *(unsigned int *)a2, v10, v12, v11);
      memmove(*(void **)(*(_QWORD *)this + 16LL), v16, v18);
      FreeTmpBuffer(v16);
      *(_QWORD *)(*(_QWORD *)this + 16LL) += v18;
      *(_DWORD *)(*(_QWORD *)this + 24LL) -= v18;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 8;
    }
  }
}
