/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18005A950
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180025EDC (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v5; // ebp
  _QWORD *v9; // rcx
  void (__fastcall **v10)(_QWORD *); // rax
  __int64 v12; // rax
  unsigned int v13; // r10d
  _BYTE *v14; // rcx
  char *v15; // r11
  _BYTE *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  void (__fastcall ***v19)(_QWORD); // rdx

  v5 = 0;
  *a4 = 0;
  if ( (*(unsigned __int16 (__fastcall **)(_QWORD *))(*a3 + 72LL))(a3) != 2 )
    goto LABEL_2;
  if ( a3 == (_QWORD *)a1 )
  {
    *a4 = 1;
    v19 = (void (__fastcall ***)(_QWORD))a1;
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 == a3[2] )
  {
    v13 = *(_DWORD *)(v12 + 92);
    if ( !v13 )
    {
LABEL_16:
      *a4 = 1;
      v9 = (_QWORD *)a1;
      *a2 = a1;
      v10 = *(void (__fastcall ***)(_QWORD *))a1;
      goto LABEL_3;
    }
    v14 = (char *)a3 + 121;
    v15 = (char *)a3 - a1;
    v16 = (_BYTE *)(a1 + 40);
    v17 = 0LL;
    v18 = a1 - (_QWORD)a3;
    while ( *((_QWORD *)v16 - 2) == *(_QWORD *)&v16[(_QWORD)v15 - 16]
         && *v16 == v16[(_QWORD)v15]
         && v14[v18 - 1] == *(v14 - 1)
         && v14[v18] == *v14
         && v14[v18 + 1] == v14[1]
         && *(_BYTE *)(v17 + a1 + 260) == *((_BYTE *)a3 + v17 + 260) )
    {
      ++v5;
      ++v17;
      v14 += 3;
      v16 += 24;
      if ( v5 >= v13 )
        goto LABEL_16;
    }
    v19 = (void (__fastcall ***)(_QWORD))a3;
LABEL_18:
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v19);
    return a2;
  }
LABEL_2:
  *a2 = a3;
  v9 = a3;
  v10 = (void (__fastcall **)(_QWORD *))*a3;
LABEL_3:
  (*v10)(v9);
  return a2;
}
