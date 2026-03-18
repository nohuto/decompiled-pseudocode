/*
 * XREFs of ParseDesktop @ 0x1C00119B0
 * Callers:
 *     ParseWindowStation @ 0x1C00118E0 (ParseWindowStation.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0107340 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 */

__int64 __fastcall ParseDesktop(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        _DWORD *a8,
        int a9,
        void **a10)
{
  void **v10; // r14
  _DWORD *v12; // rsi
  unsigned int DesktopEx2; // edi
  const UNICODE_STRING *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *i; // rbx
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v10 = a10;
  v12 = a8;
  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( v12 && *v12 != gSessionId )
    return 3221225485LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v22);
  for ( i = (_QWORD *)Object[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( v12 )
        DesktopEx2 = xxxCreateDesktopEx2(Object, a3, a4, String1, v12[1], v10);
      goto LABEL_13;
    }
    v16 = ObQueryNameInfo(i) ? (const UNICODE_STRING *)(ObQueryNameInfo(i) + 8) : 0LL;
    if ( v16 && RtlEqualUnicodeString(String1, v16, (a5 & 0x40) != 0) )
      break;
  }
  if ( !v12 )
  {
    DesktopEx2 = 0;
    goto LABEL_12;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
LABEL_12:
    ObfReferenceObject(i);
    *v10 = i;
    goto LABEL_13;
  }
  DesktopEx2 = -1073741771;
LABEL_13:
  if ( !(_DWORD)v22 )
    UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return DesktopEx2;
}
