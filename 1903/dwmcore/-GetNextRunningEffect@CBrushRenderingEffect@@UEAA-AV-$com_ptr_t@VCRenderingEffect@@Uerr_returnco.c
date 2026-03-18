/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180073360
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180073680 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall CBrushRenderingEffect::GetNextRunningEffect(char *a1, char **a2, char *a3, _BYTE *a4)
{
  unsigned int v5; // ebp
  __int64 v10; // rax
  char *v11; // rdx
  unsigned int v12; // r10d
  _BYTE *v13; // rcx
  signed __int64 v14; // rdx
  _BYTE *v15; // r8
  __int64 v16; // r9

  v5 = 0;
  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(char *))(*(_QWORD *)a3 + 72LL))(a3) == 2 )
  {
    if ( a3 != a1 )
    {
      v10 = *((_QWORD *)a1 + 2);
      if ( v10 != *((_QWORD *)a3 + 2) )
      {
LABEL_6:
        v11 = a3;
LABEL_7:
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v11);
        return a2;
      }
      v12 = *(_DWORD *)(v10 + 84);
      if ( v12 )
      {
        v13 = a3 + 121;
        v14 = a1 - a3;
        v15 = a3 + 40;
        v16 = 0LL;
        while ( *(_QWORD *)&v15[v14 - 16] == *((_QWORD *)v15 - 2)
             && v15[v14] == *v15
             && v13[v14 - 1] == *(v13 - 1)
             && v13[v14] == *v13
             && v13[v14 + 1] == v13[1]
             && a1[v16 + 260] == a3[v16 + 260] )
        {
          ++v5;
          ++v16;
          v13 += 3;
          v15 += 24;
          if ( v5 >= v12 )
            goto LABEL_17;
        }
        goto LABEL_6;
      }
    }
LABEL_17:
    *a4 = 1;
    v11 = a1;
    goto LABEL_7;
  }
  *a2 = a3;
  (**(void (__fastcall ***)(char *))a3)(a3);
  return a2;
}
