/*
 * XREFs of CreateSetupNameArray @ 0x1C0141510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreateSetupNameArray()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int ProfileValue; // eax
  unsigned __int16 *v3; // rdi
  signed int v4; // ebx
  int v5; // edx
  int v6; // ecx
  unsigned __int16 *v7; // r8
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r9
  WCHAR *v11; // r8
  __int64 v12; // rcx

  result = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v1 = result;
  if ( (_DWORD)result )
  {
    result = Win32AllocPool((unsigned int)result, 2020897621LL);
    glpSetupPrograms = (unsigned __int16 *)result;
    if ( result )
    {
      ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, result, v1, 0);
      if ( !ProfileValue || ProfileValue != v1 )
      {
        result = Win32FreePool(glpSetupPrograms);
        goto LABEL_25;
      }
      v3 = glpSetupPrograms;
      v4 = v1 >> 1;
      v5 = 0;
      v6 = 0;
      if ( v4 )
      {
        do
        {
          v7 = &glpSetupPrograms[v6];
          if ( *v7 )
          {
            ++v5;
            v8 = -1LL;
            do
              ++v8;
            while ( v7[v8] );
            v6 += v8;
          }
          ++v6;
        }
        while ( v6 < v4 );
      }
      giSetupExe = v5;
      result = Win32AllocPool(16LL * v5, 2020897621LL);
      gpastrSetupExe = (struct _UNICODE_STRING *)result;
      if ( !result )
      {
        result = Win32FreePool(glpSetupPrograms);
        giSetupExe = 0;
LABEL_25:
        glpSetupPrograms = 0LL;
        return result;
      }
      v9 = 0;
      if ( v4 )
      {
        v10 = 0LL;
        do
        {
          result = v9;
          v11 = &v3[v9];
          if ( *v11 )
          {
            v12 = -1LL;
            gpastrSetupExe[v10].Buffer = v11;
            do
              ++v12;
            while ( v11[v12] );
            gpastrSetupExe[v10].Length = 2 * v12;
            gpastrSetupExe[v10].MaximumLength = gpastrSetupExe[v10].Length + 2;
            ++v10;
            result = -1LL;
            do
              ++result;
            while ( v11[result] );
            v9 += result;
          }
          ++v9;
        }
        while ( v9 < v4 );
      }
    }
  }
  return result;
}
