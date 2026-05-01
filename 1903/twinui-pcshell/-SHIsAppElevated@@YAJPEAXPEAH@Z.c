/*
 * XREFs of ?SHIsAppElevated@@YAJPEAXPEAH@Z @ 0x1802377F4
 * Callers:
 *     ?IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z @ 0x180231F94 (-IsWindowRunningInElevatedToken@TabViewManager@@CA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

signed int __fastcall SHIsAppElevated(HANDLE TokenHandle, int *a2)
{
  int v4; // eax
  BOOL v5; // ebx
  signed int result; // eax
  bool v7; // sf
  int v8; // [rsp+58h] [rbp+10h] BYREF
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF
  int TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0;
  v8 = 1;
  v4 = NtQueryInformationToken(TokenHandle, TokenElevationType, &v8, 4u, &ReturnLength);
  v5 = 0;
  if ( v4 >= 0 )
  {
    if ( v8 == 2 )
    {
      v5 = 1;
    }
    else if ( v8 == 1 )
    {
      v4 = NtQueryInformationToken(TokenHandle, TokenElevation, &TokenInformation, 4u, &ReturnLength);
      if ( v4 >= 0 )
        v5 = TokenInformation != 0;
    }
  }
  result = RtlNtStatusToDosError(v4);
  v7 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v7 = result < 0;
  }
  if ( !v7 )
    *a2 = v5;
  return result;
}
