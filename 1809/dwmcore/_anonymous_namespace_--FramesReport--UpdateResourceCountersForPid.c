/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPid @ 0x180064C58
 * Callers:
 *     _lambda_f08f89e48aea7a3cf710738a505e63f5_::_lambda_invoker_cdecl_ @ 0x180064BD0 (_lambda_f08f89e48aea7a3cf710738a505e63f5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan @ 0x18006CDDC (_anonymous_namespace_--FramesReport--ResourcesForPid--IsLessThan.c)
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Emplace_reallocate__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_&___ptr64_ @ 0x1800E3CBC (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--allocator__anony.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

__int64 __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPid(
        _QWORD *a1,
        unsigned int a2,
        __int128 *a3)
{
  char *v3; // rax
  char *v5; // rbx
  __int64 v7; // rdi
  char *v9; // r12
  _DWORD *v10; // rcx
  __int64 result; // rax
  char *v12; // rax
  char *v13; // rdi
  __int128 v14; // xmm0
  char *v15; // rcx
  char *v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)a1[15];
  v5 = (char *)a1[14];
  v7 = (v3 - v5) >> 3;
  if ( v7 > 0 )
  {
    do
    {
      v9 = &v5[8 * (v7 >> 1)];
      if ( (unsigned __int8)anonymous_namespace_::FramesReport::ResourcesForPid::IsLessThan(*(_QWORD *)v9, a2) )
      {
        v5 = v9 + 8;
        v7 += -1 - (v7 >> 1);
      }
      else
      {
        v7 >>= 1;
      }
    }
    while ( v7 > 0 );
    v3 = (char *)a1[15];
  }
  if ( v5 == v3 || (v10 = *(_DWORD **)v5, **(_DWORD **)v5 != a2) )
  {
    v12 = (char *)operator new(0x58uLL);
    v13 = v12;
    if ( v12 )
      memset_0(v12, 0, 0x58uLL);
    else
      v13 = 0LL;
    *(_DWORD *)v13 = a2;
    v14 = *a3;
    v16 = v13;
    *(_OWORD *)(v13 + 4) = v14;
    *(_OWORD *)(v13 + 20) = a3[1];
    *(_OWORD *)(v13 + 36) = a3[2];
    *(_OWORD *)(v13 + 52) = a3[3];
    *(_OWORD *)(v13 + 68) = a3[4];
    result = *((unsigned int *)a3 + 20);
    *((_DWORD *)v13 + 21) = result;
    v15 = (char *)a1[15];
    if ( (char *)a1[16] == v15 )
    {
      return std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Emplace_reallocate__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_____ptr64_(
               a1 + 14,
               v5,
               &v16);
    }
    else if ( v5 == v15 )
    {
      *(_QWORD *)v15 = v13;
      a1[15] += 8LL;
    }
    else
    {
      *(_QWORD *)v15 = *((_QWORD *)v15 - 1);
      a1[15] += 8LL;
      result = (__int64)memmove_0(v5 + 8, v5, v15 - v5 - 8);
      *(_QWORD *)v5 = v13;
    }
  }
  else
  {
    *(_OWORD *)(v10 + 1) = *a3;
    *(_OWORD *)(v10 + 5) = a3[1];
    *(_OWORD *)(v10 + 9) = a3[2];
    *(_OWORD *)(v10 + 13) = a3[3];
    *(_OWORD *)(v10 + 17) = a3[4];
    result = *((unsigned int *)a3 + 20);
    v10[21] = result;
  }
  return result;
}
