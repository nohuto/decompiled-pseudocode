/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C001E2A4
 * Callers:
 *     DxgkGetAdapter @ 0x1C0144330 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C0144510 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00BB9FC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00BBB2C (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(struct _LUID *this, struct _LUID *a2)
{
  DWORD LowPart; // eax
  DWORD v4; // eax
  __int64 v5; // rax

  if ( a2 )
  {
    if ( this[2312].LowPart == a2->LowPart && this[2312].HighPart == a2->HighPart )
    {
      ++this[2313].LowPart;
    }
    else
    {
      this[2312] = *a2;
      this[2313].LowPart = 1;
      DXGSESSIONDATA::AddAdapterToSession((DXGSESSIONDATA *)this, this + 2312, 0LL);
    }
  }
  else
  {
    LowPart = this[2313].LowPart;
    if ( !LowPart )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v5 + 24) = 238LL;
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
