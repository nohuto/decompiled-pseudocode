/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B702C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 * Callees:
 *     _CloseDesktop @ 0x1C000E67C (_CloseDesktop.c)
 *     ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C00B71BC (-SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2, __int64 a3, __int64 a4)
{
  __int64 EmptyRgnPublic; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-30h] BYREF
  HWINSTA v12; // [rsp+58h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2, a3, a4);
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    p_DestinationString = &DestinationString;
    v11 = 48;
    v12 = a1;
    v14 = 192;
    v15 = 0LL;
    if ( (int)xxxCreateDesktopEx((unsigned int)&v11, 0, 0x2000000, 0, (__int64)&Handle, 1) < 0 )
    {
      GreDeleteObject(EmptyRgnPublic);
    }
    else if ( (int)SetDisconnectDesktopSecurity((HDESK)Handle) < 0
           || (v7 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL),
               gspdeskDisconnect = Object,
               v7 < 0) )
    {
      GreDeleteObject(EmptyRgnPublic);
      CloseDesktop((unsigned __int64)Handle, 1);
      gspdeskDisconnect = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 40LL) + 168LL) = EmptyRgnPublic;
      KeAttachProcess(gpepCSRSS);
      v8 = ObOpenObjectByPointer(gspdeskDisconnect, 0x200u, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectDesk);
      if ( v8 >= 0 )
        v8 = ObOpenObjectByPointer(a2, 0, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectWinSta);
      KeDetachProcess();
      if ( v8 >= 0 )
        return 1LL;
      GreDeleteObject(EmptyRgnPublic);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspdeskDisconnect + 1) + 24LL) + 40LL) + 168LL) = 0LL;
      if ( ghDisconnectDesk )
      {
        ObCloseHandle(ghDisconnectDesk, 0);
        ghDisconnectDesk = 0LL;
      }
      CloseDesktop((unsigned __int64)Handle, 1);
    }
  }
  return 0LL;
}
