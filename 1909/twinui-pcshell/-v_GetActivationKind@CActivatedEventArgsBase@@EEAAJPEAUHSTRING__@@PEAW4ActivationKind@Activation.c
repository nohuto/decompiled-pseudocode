/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180441820
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180435F30 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x1804411B4 (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3)
{
  const WCHAR *StringRawBuffer; // rbp
  HSTRING *v6; // r8
  char v7; // si
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  LPCWCH *v10; // rdi
  int v12; // [rsp+70h] [rbp+18h]
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v12 = SplitActionAndServiceId(a2, &string, v6);
  if ( v12 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v8 >= 0x2C )
      break;
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_180487F80)[2 * v8], -1, 0) == 2 )
    {
      v7 = 1;
      *(_DWORD *)a3 = *((_DWORD *)&off_180487F80 + 4 * v8 + 2);
    }
    ++v8;
  }
  while ( !v7 );
  if ( !v7 )
  {
    v9 = 0;
    v10 = (LPCWCH *)&off_180488240;
    while ( CompareStringOrdinal(StringRawBuffer, -1, *v10, -1, 0) != 2 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 0xB )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs();
        break;
      }
    }
  }
  WindowsDeleteString(string);
  return (unsigned int)v12;
}
