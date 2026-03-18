/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180025C90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180025EDC (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180025F0C (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ??2CCommonRenderingEffect@@SAPEAX_K@Z @ 0x180026640 (--2CCommonRenderingEffect@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CCommonRenderingEffect::GetNextRunningEffect(char *a1, _QWORD *a2, char *a3, _BYTE *a4)
{
  char *v4; // rdi
  int v5; // ebx
  char *v7; // rsi
  unsigned __int64 *v9; // r9
  __int64 v10; // r15
  _BYTE *v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // r8
  __int64 v14; // r10
  void (__fastcall **v15)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  unsigned __int64 v16; // rcx
  bool v17; // sf
  char *v19; // rbp
  char *v20; // rbx
  char *v21; // rax
  void *v22; // rax
  char *v23; // rdx
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int16 v25; // [rsp+70h] [rbp+18h] BYREF
  char v26; // [rsp+72h] [rbp+1Ah]

  *a4 = 0;
  v4 = a1;
  v5 = 65537;
  v7 = a3;
  if ( !a1[70] )
    v5 = 1;
  if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)a3 + 72LL))(a3) == v5 )
  {
    if ( v7 != v4 )
    {
      v9 = &v24;
      v10 = 0LL;
      v11 = v7 + 16;
      v24 = 0LL;
      v12 = 0LL;
      v13 = v7 + 65;
      v14 = v4 - v7;
      do
      {
        v15 = *(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))&v11[v14];
        if ( v15 )
        {
          if ( *(_QWORD *)v11 )
          {
            if ( v15 != *(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))v11
              || v11[v14 + 16] != v11[16]
              || v13[v14 - 1] != *(v13 - 1)
              || v13[v14] != *v13
              || v13[v14 + 1] != v13[1] )
            {
              goto LABEL_26;
            }
          }
          else
          {
            *(_DWORD *)v9 = -1;
          }
        }
        else if ( *(_QWORD *)v11 )
        {
          *(_DWORD *)v9 = 1;
        }
        v12 = (unsigned int)(v12 + 1);
        v11 += 24;
        v13 += 3;
        v9 = (unsigned __int64 *)((char *)v9 + 4);
      }
      while ( (unsigned int)v12 < 2 );
      if ( v4[70] )
      {
        v16 = HIDWORD(v24);
        v17 = (v24 & 0x80000000) != 0LL;
        if ( (int)v24 <= 0 )
        {
          if ( SHIDWORD(v24) <= 0 )
          {
            *a4 = 1;
            *a2 = v4;
            (**(void (__fastcall ***)(char *, __int64, _BYTE *, unsigned __int64 *))v4)(v4, v12, v13, v9);
            return a2;
          }
          v17 = (v24 & 0x80000000) != 0LL;
        }
        if ( !v17 && (v24 & 0x8000000000000000uLL) == 0LL )
        {
          *a4 = 1;
LABEL_26:
          *a2 = v7;
          (**(void (__fastcall ***)(char *, __int64, _BYTE *, unsigned __int64 *))v7)(v7, v12, v13, v9);
          return a2;
        }
        if ( CCommonRegistryData::m_fEnableCommonSuperSets )
        {
          if ( (v24 & 0x80000000) == 0LL )
          {
            v19 = v7;
            v20 = v7;
            v21 = v7;
          }
          else
          {
            v19 = v4;
            v20 = v4;
            v21 = v4;
          }
          if ( (v24 & 0x8000000000000000uLL) == 0LL )
          {
            v4 = v7;
            v20 = v21;
          }
          else
          {
            v7 = v4;
          }
          *a4 = 1;
          v22 = CCommonRenderingEffect::operator new(v16);
          if ( v22 )
          {
            LOWORD(v24) = *(_WORD *)(v4 + 67);
            BYTE2(v24) = v4[69];
            v25 = *((_WORD *)v19 + 32);
            v26 = v19[66];
            v10 = CCommonRenderingEffect::CCommonRenderingEffect(v22, v20 + 16, &v25, v7 + 40, &v24);
          }
          v23 = (char *)v10;
          goto LABEL_38;
        }
      }
      else if ( !v24 )
      {
        *a4 = 1;
        wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
          a2,
          v4,
          v13,
          v9);
        return a2;
      }
      v23 = v7;
LABEL_38:
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        a2,
        v23,
        v13,
        v9);
      return a2;
    }
    *a4 = 1;
    *a2 = v4;
    (**(void (__fastcall ***)(char *))v4)(v4);
  }
  else
  {
    *a2 = v7;
    (**(void (__fastcall ***)(char *))v7)(v7);
  }
  return a2;
}
