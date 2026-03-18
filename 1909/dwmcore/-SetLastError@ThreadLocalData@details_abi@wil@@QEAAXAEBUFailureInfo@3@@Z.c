/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180154F48
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180153BC0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180154E08 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v3; // edi
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  _WORD *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  unsigned __int16 v11; // dx

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_18;
  v2 = 0LL;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    *((_QWORD *)this + 3) = v7;
    v2 = v7;
    if ( v7 )
    {
      v8 = v7 + 200;
      *((_DWORD *)this + 8) = 5;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v8 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
    }
  }
  if ( v2 )
  {
LABEL_18:
    if ( !v3 || (v9 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v9) )
    {
LABEL_15:
      v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      *((_WORD *)this + 17) = v11;
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)&v2[40 * v11],
        a2,
        _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
    }
    else
    {
      v10 = v2 + 4;
      while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 1) )
      {
        v10 += 20;
        if ( v10 - 2 == v9 )
        {
          v2 = (_WORD *)*((_QWORD *)this + 3);
          goto LABEL_15;
        }
      }
    }
  }
}
