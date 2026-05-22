/*
 * XREFs of ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x180065FF8
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x18006616C (-OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ.c)
 */

void __fastcall MobileButtonDeviceCollection::SendIOCTLMessage(char *a1, int a2, char a3)
{
  int v4; // edx
  int v5; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  char *v12; // r14
  void *v13; // rax
  void *v14; // rbx
  void *v15; // rcx
  void *v16; // rbp
  DWORD LastError; // edi
  void *v18; // rcx
  char v19; // [rsp+40h] [rbp-28h] BYREF
  int InBuffer; // [rsp+88h] [rbp+20h] BYREF
  char v21; // [rsp+8Ch] [rbp+24h]

  if ( a2 > 8 )
  {
    v5 = 9;
    v8 = a2 - 9;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              return;
            v5 = 15;
          }
          else
          {
            v5 = 14;
          }
        }
        else
        {
          v5 = 13;
        }
      }
    }
    else
    {
      v5 = 0;
    }
  }
  else if ( a2 == 8 )
  {
    v5 = 7;
  }
  else if ( a2 )
  {
    v4 = a2 - 2;
    if ( v4 )
    {
      v5 = 3;
      v6 = v4 - 3;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return;
          v5 = 8;
        }
      }
      else
      {
        v5 = 2;
      }
    }
    else
    {
      v5 = 5;
    }
  }
  else
  {
    v5 = 10;
  }
  v12 = a1 + 2888;
  if ( ((*((_QWORD *)a1 + 361) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v13 = MobileButtonDeviceCollection::OpenMobileButtonDriver((MobileButtonDeviceCollection *)a1);
    v14 = v13;
    if ( v13 == (void *)-1LL )
      return;
    v15 = v13;
    if ( v12 != &v19 )
    {
      v16 = *(void **)v12;
      if ( (unsigned __int64)(*(_QWORD *)v12 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v16);
        SetLastError(LastError);
      }
      *(_QWORD *)v12 = v14;
      v15 = 0LL;
      v14 = 0LL;
    }
    if ( v15 )
      CloseHandle(v14);
  }
  v18 = *(void **)v12;
  InBuffer = v5;
  v21 = a3;
  DeviceIoControl(v18, 0xB02A8u, &InBuffer, 8u, 0LL, 0, 0LL, 0LL);
}
