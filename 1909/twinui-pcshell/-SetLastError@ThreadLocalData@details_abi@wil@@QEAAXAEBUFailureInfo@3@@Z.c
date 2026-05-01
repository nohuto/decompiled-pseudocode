/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180016350
 * Callers:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800161A4 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180016560 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v3; // edi
  unsigned __int16 v6; // dx
  HANDLE ProcessHeap; // rax
  _WORD *v8; // rax
  _WORD *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_20;
  v2 = 0LL;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    *((_QWORD *)this + 3) = v8;
    v2 = v8;
    if ( v8 )
    {
      v9 = v8 + 200;
      *((_DWORD *)this + 8) = 5;
      do
      {
        *v8 = 80;
        v8 += 40;
      }
      while ( v8 != v9 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
    }
  }
  if ( v2 )
  {
LABEL_20:
    if ( !v3 || (v10 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v10) )
    {
LABEL_3:
      v6 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v6;
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)&v2[40 * v6],
        a2,
        _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
    }
    else
    {
      v11 = v2 + 4;
      while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
      {
        v11 += 20;
        if ( v11 - 2 == v10 )
        {
          v2 = (_WORD *)*((_QWORD *)this + 3);
          goto LABEL_3;
        }
      }
    }
  }
}
