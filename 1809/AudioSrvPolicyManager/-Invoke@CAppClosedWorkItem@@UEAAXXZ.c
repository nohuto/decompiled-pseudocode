/*
 * XREFs of ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x18002C8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sid @ 0x18002B478 (WPP_SF_Sid.c)
 */

void __fastcall CAppClosedWorkItem::Invoke(CAppClosedWorkItem *this, __int64 a2, __int64 a3)
{
  char v4[4]; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    *(_DWORD *)v4 = *((_DWORD *)this + 4);
    WPP_SF_Sid(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      *((const wchar_t **)this + 1),
      *((_QWORD *)this + 3),
      *(_DWORD *)v4);
  }
  CApplicationManager::OnApplicationClosed(
    g_ApplicationManager,
    *((unsigned __int16 **)this + 1),
    *((_QWORD *)this + 3),
    *((_DWORD *)this + 4));
}
