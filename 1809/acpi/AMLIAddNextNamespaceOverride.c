/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C00623F8
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C0062B30 (AMLIGetValidNamespaceName.c)
 *     OSCloseHandle @ 0x1C0093C68 (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C00AEC98 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00AEEA4 (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v3; // edi
  int RegValue; // ebx
  ULONG v6; // esi
  int Subkey; // edi
  int v8; // edx
  unsigned int v10; // [rsp+28h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int8 v13[8]; // [rsp+48h] [rbp-18h] BYREF

  KeyHandle = 0LL;
  v3 = 0;
  do
  {
    RegValue = OSReadNextRegValue(a1, v3, v13);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, a2, v13);
    ++v3;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v6 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(a1, v6, v13, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v13, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v13, a2, *(struct _EX_RUNDOWN_REF **)(a2 + 48), &v12, v8 & v10);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v12);
            DereferenceObjectEx(v12);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v6;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
