/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18000DBAC
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18000DAD8 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18000DC80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::RuntimeClassInitialize(
        CDeviceGraphObjectsStore *this,
        const unsigned __int16 *a2)
{
  void *v2; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rax
  DWORD LastError; // ebx
  unsigned __int16 **v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  v5 = -1LL;
  *((_QWORD *)this + 2) = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 + 1 >= v6 )
    v5 = v6 + 1;
  v7 = v6 + 1 < v6 ? 0x80070216 : 0;
  if ( v6 + 1 >= v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    if ( is_mul_ok(v5, 2uLL) )
    {
      v8 = (unsigned __int16 *)CoTaskMemAlloc(2 * v5);
      *((_QWORD *)this + 2) = v8;
      if ( !v8 )
      {
        v7 = -2147024882;
        goto LABEL_15;
      }
      v7 = 0;
      StringCchCopyNExW(v8, v5, a2, v6, v11, v12, v13);
    }
    else
    {
      v7 = -2147024362;
    }
  }
  if ( (v7 & 0x80000000) == 0 )
    return 0LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)v7,
    (int)v11);
  return v7;
}
