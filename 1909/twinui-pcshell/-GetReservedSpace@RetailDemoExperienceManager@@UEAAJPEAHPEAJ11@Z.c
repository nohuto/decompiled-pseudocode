/*
 * XREFs of ?GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z @ 0x1801D3F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RetailDemoExperienceManager::GetReservedSpace(
        RetailDemoExperienceManager *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  int v10; // eax

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  if ( *((_DWORD *)this + 68) || (v10 = 0, *((_DWORD *)this + 70)) )
    v10 = 1;
  *a2 = v10;
  *a5 = *((_DWORD *)this + 57);
  if ( *((_DWORD *)this + 74) )
  {
    *a3 = 0;
    *a4 = 0;
  }
  else
  {
    *a3 = *((_DWORD *)this + 68);
    *a4 = *((_DWORD *)this + 70);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
