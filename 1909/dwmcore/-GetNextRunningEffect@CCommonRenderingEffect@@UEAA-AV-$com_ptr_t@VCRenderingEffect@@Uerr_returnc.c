/*
 * XREFs of ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180036500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180036710 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800378A4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003BEB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall CCommonRenderingEffect::GetNextRunningEffect(__int64 a1, __int64 *a2, _BYTE *a3, _BYTE *a4)
{
  int v8; // ebx
  int *v9; // r9
  _BYTE *v10; // r8
  unsigned int v11; // r11d
  _BYTE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rax
  _BYTE *v16; // rcx
  void (__fastcall **v17)(_BYTE *, __int64, _BYTE *, int *); // rax
  bool v18; // sf
  __int64 v20; // rdx
  struct CCommonRenderingEffect *v21; // rcx
  int *v22; // rdx
  _BYTE *v23; // rax
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v25; // r10
  int v26; // edx
  __int64 v27; // r8
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+68h] [rbp+28h]
  int v31; // [rsp+70h] [rbp+30h] BYREF
  int v32; // [rsp+74h] [rbp+34h]
  __int16 v33; // [rsp+80h] [rbp+40h] BYREF
  char v34; // [rsp+82h] [rbp+42h]

  *a4 = 0;
  v8 = *(_BYTE *)(a1 + 70) != 0 ? 65537 : 1;
  if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 72LL))(a3) == v8 )
  {
    if ( a3 == (_BYTE *)a1 )
      goto LABEL_30;
    v31 = 0;
    v9 = &v31;
    v32 = 0;
    v10 = a3 + 16;
    v11 = 0;
    v12 = a3 + 65;
    v13 = a1 - (_QWORD)a3;
    v14 = 2LL;
    do
    {
      v15 = *(_QWORD *)&v10[v13];
      if ( v15 )
      {
        if ( *(_QWORD *)v10 )
        {
          if ( v15 != *(_QWORD *)v10
            || v10[v13 + 16] != v10[16]
            || v12[v13 - 1] != *(v12 - 1)
            || v12[v13] != *v12
            || v12[v13 + 1] != v12[1] )
          {
            *a2 = (__int64)a3;
            v16 = a3;
            v17 = *(void (__fastcall ***)(_BYTE *, __int64, _BYTE *, int *))a3;
LABEL_19:
            (*v17)(v16, v13, v10, v9);
            return a2;
          }
        }
        else
        {
          *v9 = -1;
        }
      }
      else if ( *(_QWORD *)v10 )
      {
        *v9 = 1;
      }
      ++v11;
      v10 += 24;
      v12 += 3;
      ++v9;
    }
    while ( v11 < 2 );
    if ( *(_BYTE *)(a1 + 70) )
    {
      v18 = v31 < 0;
      if ( v31 <= 0 )
      {
        if ( v32 <= 0 )
        {
          *a4 = 1;
          v16 = (_BYTE *)a1;
          *a2 = a1;
          v17 = *(void (__fastcall ***)(_BYTE *, __int64, _BYTE *, int *))a1;
          goto LABEL_19;
        }
        v18 = v31 < 0;
      }
      if ( v18 || v32 < 0 )
      {
        if ( CCommonRegistryData::m_fEnableCommonSuperSets )
        {
          v21 = (struct CCommonRenderingEffect *)&v28;
          v22 = &v31;
          do
          {
            v18 = *v22 < 0;
            v23 = (_BYTE *)a1;
            ++v22;
            if ( !v18 )
              v23 = a3;
            *(_QWORD *)v21 = v23;
            v21 = (struct CCommonRenderingEffect *)((char *)v21 + 8);
            --v14;
          }
          while ( v14 );
          *a4 = 1;
          ObjectCache = CThreadContext::GetObjectCache(v21);
          v25 = 0LL;
          v26 = *((_DWORD *)ObjectCache + 1);
          if ( v26 )
          {
            v25 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
            *((_QWORD *)ObjectCache + 1) = *v25;
            *((_DWORD *)ObjectCache + 1) = v26 - 1;
          }
          if ( !v25 )
          {
            v25 = DefaultHeap::Alloc(0x48uLL);
            if ( !v25 )
              ModuleFailFastForHRESULT(2147942414LL, retaddr, v27);
          }
          LOWORD(v31) = *(_WORD *)(v29 + 67);
          BYTE2(v31) = *(_BYTE *)(v29 + 69);
          v33 = *(_WORD *)(v28 + 64);
          v34 = *(_BYTE *)(v28 + 66);
          v20 = CCommonRenderingEffect::CCommonRenderingEffect(v25, v28 + 16, &v33, v29 + 40, &v31);
          goto LABEL_27;
        }
      }
      else
      {
        *a4 = 1;
      }
      goto LABEL_26;
    }
    if ( !v31 && !v32 )
    {
LABEL_30:
      *a4 = 1;
      v20 = a1;
      goto LABEL_27;
    }
  }
LABEL_26:
  v20 = (__int64)a3;
LABEL_27:
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    a2,
    v20);
  return a2;
}
