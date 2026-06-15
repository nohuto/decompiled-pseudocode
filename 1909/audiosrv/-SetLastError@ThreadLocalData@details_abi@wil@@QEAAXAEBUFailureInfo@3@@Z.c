/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x1800BC60C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180048160 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800BC2B8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v4; // edi
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rax
  _WORD *v8; // rax
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  volatile signed __int32 *v11; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_17;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    *((_QWORD *)this + 3) = v7;
    v2 = v7;
    if ( v7 )
    {
      v8 = v7 + 200;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v8 )
      {
        do
        {
          *v2 = 80;
          v2 += 40;
        }
        while ( v2 != v8 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_17:
        if ( !v4 || (v9 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v9) )
        {
LABEL_14:
          v11 = (volatile signed __int32 *)*((_QWORD *)this + 1);
          *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1)
                                % *((unsigned __int16 *)this + 16);
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 80LL * *((unsigned __int16 *)this + 17)),
            a2,
            _InterlockedIncrement(v11));
        }
        else
        {
          v10 = v2 + 4;
          while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 1) )
          {
            v10 += 20;
            if ( v10 - 2 == v9 )
              goto LABEL_14;
          }
        }
      }
    }
  }
}
