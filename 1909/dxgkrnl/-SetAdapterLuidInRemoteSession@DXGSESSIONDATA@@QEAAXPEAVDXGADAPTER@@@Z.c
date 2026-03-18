/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001DF30
 * Callers:
 *     DxgkGetAdapter @ 0x1C0159F60 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C015A0F0 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C0147EE0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014801C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(struct _LUID *this, struct DXGADAPTER *a2)
{
  DWORD LowPart; // eax
  DWORD v4; // eax
  __int64 v5; // rax

  if ( a2 )
  {
    if ( this[2312].LowPart == *((_DWORD *)a2 + 69) && this[2312].HighPart == *((_DWORD *)a2 + 70) )
    {
      ++this[2313].LowPart;
    }
    else
    {
      this[2312] = *(struct _LUID *)((char *)a2 + 276);
      this[2313].LowPart = 1;
      DXGSESSIONDATA::AddAdapterToSession((DXGSESSIONDATA *)this, this + 2312, a2, 0LL);
    }
  }
  else
  {
    LowPart = this[2313].LowPart;
    if ( !LowPart )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
      *(_QWORD *)(v5 + 24) = 242LL;
      WdLogEvent5_WdAssertion(v5);
      LowPart = this[2313].LowPart;
    }
    v4 = LowPart - 1;
    this[2313].LowPart = v4;
    if ( !v4 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession((DXGSESSIONDATA *)this, this + 2312);
      this[2312] = 0LL;
    }
  }
}
