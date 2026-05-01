/*
 * XREFs of ?HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z @ 0x10013803
 * Callers:
 *     _HamQueryApplicationUsageInfo@12 @ 0x10012AD0 (_HamQueryApplicationUsageInfo@12.c)
 *     _HamQueryPackageUsageInfo@12 @ 0x10012BE0 (_HamQueryPackageUsageInfo@12.c)
 * Callees:
 *     ?HampSystemCreateKey@@YGJPAUHKEY__@@PBGKKPAPAU1@@Z @ 0x100137D8 (-HampSystemCreateKey@@YGJPAUHKEY__@@PBGKKPAPAU1@@Z.c)
 */

int __userpurge HampSystemOpenAppRegistryKey@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3@<ebx>,
        const unsigned __int16 *a4,
        HKEY *a5,
        unsigned int a6,
        HKEY *a7)
{
  int v7; // edi
  int LastError; // esi
  WCHAR *Heap; // eax
  WCHAR *v10; // ebx
  const unsigned __int16 *v11; // ecx
  HKEY v12; // ecx
  HKEY *v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+8h] [ebp-Ch] BYREF
  HKEY v17; // [esp+Ch] [ebp-8h] BYREF
  HKEY hKey; // [esp+10h] [ebp-4h] BYREF

  v17 = 0;
  hKey = 0;
  v7 = OpenStateExplicitForUserSid(a1, a2);
  if ( v7 )
  {
    v16 = 0;
    GetSystemAppDataKey(v7, 0, 0, &v16);
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2 * v16);
    v10 = Heap;
    if ( Heap )
    {
      if ( GetSystemAppDataKey(v7, &v17, Heap, &v16) )
      {
        LastError = HampSystemCreateKey(v10, v17, 0, v11, &hKey, a3, v15);
        if ( LastError >= 0 )
        {
          v12 = hKey;
          hKey = 0;
          LastError = 0;
          *a5 = v12;
        }
      }
      else if ( (int)GetLastError() > 0 )
      {
        LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      }
      else
      {
        LastError = GetLastError();
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
    else
    {
      LastError = -1073741801;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v17 )
    RegCloseKey(v17);
  if ( v7 )
    CloseState(v7);
  return LastError;
}
