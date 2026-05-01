/*
 * XREFs of ?CrmpActivityRequestAndWait@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1001342A
 * Callers:
 *     _CrmActivityRequestAndWait@4 @ 0x100134F0 (_CrmActivityRequestAndWait@4.c)
 * Callees:
 *     <none>
 */

int __thiscall CrmpActivityRequestAndWait(int this)
{
  int result; // eax
  unsigned int v3; // eax
  DWORD v4; // eax
  DWORD v5; // ecx

  result = RtlSubscribeWnfStateChangeNotification(
             this + 36,
             *(_DWORD *)(this + 28),
             *(_DWORD *)(this + 32),
             0,
             CrmpActivityWNFSyncCallback,
             this,
             0,
             0,
             0);
  if ( result >= 0 )
  {
    v3 = *(_DWORD *)(this + 40);
    if ( v3 <= 0x418937 )
      v4 = 1000 * v3;
    else
      v4 = -1;
    v5 = WaitForSingleObject(*(HANDLE *)(this + 44), v4);
    if ( v5 == -1 )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
    else
    {
      result = 258;
      if ( v5 != 258 )
        return 0;
    }
  }
  return result;
}
