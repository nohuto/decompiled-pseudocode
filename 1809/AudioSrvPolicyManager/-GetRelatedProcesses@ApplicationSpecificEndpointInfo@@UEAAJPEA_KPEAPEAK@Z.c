/*
 * XREFs of ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x1800312E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x180032EF0 (-_Xrange@-$vector@KV-$allocator@K@std@@@std@@CAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetRelatedProcesses(
        ApplicationSpecificEndpointInfo *this,
        unsigned __int64 *a2,
        unsigned int **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  int v15[2]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  *(_QWORD *)v15 = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 2;
  v8 = 0LL;
  *a2 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)CoTaskMemAlloc(4 * v7);
    if ( !v8 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942414LL;
    }
    for ( i = 0LL; i < v7; ++i )
    {
      v11 = *((_QWORD *)this + 7);
      if ( (*((_QWORD *)this + 8) - v11) >> 2 <= i )
      {
        try
        {
          std::vector<unsigned long>::_Xrange(i);
        }
        catch ( ... )
        {
          v13 = &v14;
          *((_DWORD *)v13 + 20) = wil::details::in1diag3::Return_CaughtException(
                                    (wil::details::in1diag3 *)v13[9],
                                    (void *)0x14A,
                                    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\appli"
                                             "cationspecificendpointinfo.cpp",
                                    v12);
          return (unsigned int)v17;
        }
      }
      v8[i] = *(_DWORD *)(v11 + 4 * i);
    }
  }
  *a3 = v8;
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
