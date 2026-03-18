/*
 * XREFs of ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00588F8
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0058778 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi
  __int64 result; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  v4 = v3 == 0LL ? 0xC0000017 : 0;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
    {
      Win32FreePool((__int64)v3);
      v3 = 0LL;
    }
  }
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)v4;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 4) = v3;
  return result;
}
