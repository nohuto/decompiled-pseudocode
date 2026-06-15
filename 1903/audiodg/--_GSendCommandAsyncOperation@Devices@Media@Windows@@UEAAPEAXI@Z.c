/*
 * XREFs of ??_GSendCommandAsyncOperation@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x14004685C
 * Callers:
 *     ??_ESendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAPEAXI@Z @ 0x140018B50 (--_ESendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ @ 0x140045CC8 (--1SendCommandAsyncOperation@Devices@Media@Windows@@UEAA@XZ.c)
 */

Windows::Media::Devices::SendCommandAsyncOperation *__fastcall Windows::Media::Devices::SendCommandAsyncOperation::`scalar deleting destructor'(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        char a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::~SendCommandAsyncOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
